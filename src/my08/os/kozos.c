#include <defines.h>
#include <kozos.h>
#include <intr.h>
#include <interrupt.h>
#include <syscall.h>
#include <lib.h>

#define THREAD_NUM 6
#define THREAD_NAME_SIZE 15

/*スレッド・コンテキスト*/
typedef struct _kz_context{
  uint32 sp;/*スタックポインタ*/
}kz_context;

/*タスク・コントロール・ブロック*/
typedef struct _kz_thread{
  struct _kz_thread *next;/*レディーキューへの接続に利用するnextポインタ*/
  char name[THREAD_NAME_SIZE + 1];/*スレッド名*/
  char *stack;/*スタック*/

  struct{/*スレッドのスタートアップのthread_init()に渡すパラメータ*/
    kz_func_t func;/*スレッドのメイン関数*/
    int argc;/*スレッドのメイン関数に渡す*/
    char **argv;/*スレッドのメイン関数に渡す*/
  } init;

  struct{/* システムコール用バッファ */
    kz_syscall_type_t type;
    kz_syscall_param_t *param;
  } syscall;

  kz_context context; /* コンテキスト情報 */
  char dummy[16];
} kz_thread;

/* スレッドのレディーキュー */
static struct{
  kz_thread *head; /*レディーキューの先頭エントリ*/
  kz_thread *tail; /*レディーキューの最後尾エントリ*/
} readyque;

static kz_thread *current; /* カレンドスレッド */
static kz_thread threads[THREAD_NUM]; /* タスク・コントロール・ブロック */
static kz_handler_t handlers[SOFTVEC_TYPE_NUM]; /*割り込みハンドラ*/

void dispatch(kz_context *context);//startup.sで実装済み

//current threadをready queueから抜き出す
static int getcurrent(void){
  if (NULL == current){
    return -1;
  }

  /* current threadは必ず先頭にあるはずなので、先頭から抜き出す */
  readyque.head = current->next;
  if (readyque.head == NULL){
    readyque.tail = NULL;
  }
  current->next = NULL;//クリア

  return 0;
}

/* current thread をreadyqueueに繋げる */
static int putcurrent(void){
  if (current == NULL){
    return -1;
  }

  if (readyque.tail){
    readyque.tail->next = current;
  } else {
    readyque.head = current;
  }
  readyque.tail = current;

  return 0;
}

/* threadの終了 */
static void thread_end(void){
  kz_exit();
}

/* threadのスタートアップ */
static void thread_init(kz_thread *thp){
  /* スレッドのメイン関数を呼び出す */
  thp->init.func(thp->init.argc, thp->init.argv);
  thread_end();//メイン関数から戻ってきたらthreadを終了する
}

/* system callの処理 */
static kz_thread_id_t thread_run(kz_func_t func, char *name, int stacksize, int argc, char *argv[]){
  int i;
  kz_thread *thp;
  uint32 *sp;
  extern char userstack;
  static char *thread_stack = &userstack;

  /* 空いているタスク・コントロール・ブロックを検索 */
  for (i = 0; i < THREAD_NUM; i++){
    thp = &threads[i];
    if (!thp->init.func) /*見つかった*/
      break;
  }
  if (i == THREAD_NUM) /* 見つからなかった */
    return -1;

  memset(thp, 0, sizeof(*thp));//TCBを0クリアする

  /* タスクコントロールブロックの設定 */
  strcpy(thp->name, name);
  thp->next = NULL;
  thp->init.func = func;
  thp->init.argc = argc;
  thp->init.argv = argv;

  /* スタック領域の確保 */
  memset(thread_stack, 0, stacksize);
  thread_stack += stacksize;

  thp->stack = thread_stack;//スタックを設定
  /* スタックの初期化 */
  sp = (uint32 *)thp->stack;
  *(--sp) = (uint32)thread_end;

  /* プログラムカウンタの設定 */
  *(--sp) = (uint32)thread_init;
  *(--sp) = 0; /*ER6*/
  *(--sp) = 0; /*ER5*/
  *(--sp) = 0; /*ER4*/
  *(--sp) = 0; /*ER3*/
  *(--sp) = 0; /*ER2*/
  *(--sp) = 0; /*ER1*/
  *(--sp) = (uint32)thp; /*ER0*/

  thp->context.sp = (uint32)sp;//コンテキストとしてSPを保存

  putcurrent();

  current = thp;
  putcurrent();//ready queに接続する

  return (kz_thread_id_t)current;//新規作成したスレッドのID
}

static int thread_exit(void){
  puts(current->name);
  puts(" Exit.\n");
  memset(current, 0, sizeof(*current));
  return 0;
}

static void thread_intr(softvec_type_t type, unsigned long sp);

static int setintr(softvec_type_t type, kz_handler_t handler){
  /* 割り込みを受け付けるために、ソフトウェア・割り込みベクタに
   * OSの割り込み処理の入口となる関数を登録する
   */
  softvec_setintr(type, thread_intr);//割り込み時にOSのハンドラが呼ばれるように
  handlers[type] = handler;

  return 0;
}
//システムコールの実行
static void call_functions(kz_syscall_type_t type, kz_syscall_param_t *p){
  /* システムコールの実行中にcurrentが書き換わる */
  switch(type){
  case KZ_SYSCALL_TYPE_RUN:
    p->un.run.ret = thread_run(p->un.run.func, p->un.run.name,
        p->un.run.stacksize, p->un.run.argc, p->un.run.argv);
    break;
  case KZ_SYSCALL_TYPE_EXIT:
    thread_exit();
    break;
  default:
    break;
  }
}

//システムコールの処理
static void syscall_proc(kz_syscall_type_t type, kz_syscall_param_t *p){
  /*
   * システムコールを呼出したスレッドをready queから外した状態で
   * 処理関数を呼び出す.よってシステムコールを呼出したスレッドを
   * そのまま動作継続させたい場合には、処理関数の内部でputcurrent()を行う
   */
  getcurrent();
  call_functions(type, p);
}

/* スレッドのスケジューリング */
static void schedule(void){
  if (!readyque.head)
    kz_sysdown();

  current = readyque.head;
}

//システムコールの呼出し
static void syscall_intr(void){
  syscall_proc(current->syscall.type, current->syscall.param);
}

//ソフトウェアエラーの発生
static void softerr_intr(void){
  //エラーが発生したらthreadを強制終了する
  puts(current->name);
  puts(" DOWN.\n");
  getcurrent();
  thread_exit();
}

//割り込み処理の入り口関数
static void thread_intr(softvec_type_t type, unsigned long sp){
  current->context.sp = sp;
  if (handlers[type])
    handlers[type]();//割り込みに対応した各ハンドラを実行する

  schedule();

  dispatch(&current->context);//返ってこない
}

//初期スレッドを起動し、OSの動作を開始する
void kz_start(kz_func_t func, char *name, int stacksize, int argc, char *argv[]){
  current = NULL;
  //各種データの初期化
  readyque.head = readyque.tail = NULL;
  memset(threads, 0, sizeof(threads));
  memset(handlers, 0, sizeof(handlers));

  /* 割り込みハンドラの登録 */
  setintr(SOFTVEC_TYPE_SYSCALL, syscall_intr);//システムコール
  setintr(SOFTVEC_TYPE_SOFTERR, softerr_intr);//ダウン要因発生

  /* システムコール発行不可なので直接関数を呼出してスレッドを作成する*/
  current = (kz_thread *)thread_run(func, name, stacksize, argc, argv);

  /* 最初のスレッドを起動 */
  dispatch(&current->context);
}

//OS内部で致命的エラーが発生した場合にはこの関数を呼ぶ
void kz_sysdown(void){
  puts("System Error!\n");
  while(1){
    ;
  }
}

/*システムコール呼出し用ライブラリ関数 */
void kz_syscall(kz_syscall_type_t type, kz_syscall_param_t *param){
  current->syscall.type = type;
  current->syscall.param = param;
  asm volatile ("trapa #0");//トラップ割り込み発行
}
