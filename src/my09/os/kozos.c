#include <defines.h>
#include <kozos.h>
#include <intr.h>
#include <interrupt.h>
#include <syscall.h>
#include <lib.h>

#define THREAD_NUM 6
#define THREAD_NAME_SIZE 15
#define PRIORITY_NUM 16
#define KZ_THREAD_FLAG_READY (1 << 0)

/*スレッド・コンテキスト*/
typedef struct _kz_context{
  uint32 sp;/*スタックポインタ*/
}kz_context;

/*タスク・コントロール・ブロック*/
typedef struct _kz_thread{
  struct _kz_thread *next;/*レディーキューへの接続に利用するnextポインタ*/
  char name[THREAD_NAME_SIZE + 1];/*スレッド名*/
  int priority; /* 優先度 */
  char *stack; /* スタック */
  uint32 flags; /* 各種フラグ */

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
  char dummy[8];
} kz_thread;

/* スレッドのレディーキュー */
static struct{
  kz_thread *head; /*レディーキューの先頭エントリ*/
  kz_thread *tail; /*レディーキューの最後尾エントリ*/
} readyque[PRIORITY_NUM];

static kz_thread *current; /* カレンドスレッド */
static kz_thread threads[THREAD_NUM]; /* タスク・コントロール・ブロック */
static kz_handler_t handlers[SOFTVEC_TYPE_NUM]; /*割り込みハンドラ*/

void dispatch(kz_context *context);//startup.sで実装済み

//current threadをready queueから抜き出す
static int getcurrent(void){
  puts("getcurrent:current threadをready queから抜き出す\n");
  if (NULL == current){
    return -1;
  }
  if (!(current->flags & KZ_THREAD_FLAG_READY)){
    //すでにReadyにない場合
    return 1;
  }
  /* current threadは必ず先頭にあるはずなので、先頭から抜き出す */
  readyque[current->priority].head = current->next;
  if (readyque[current->priority].head == NULL){
    readyque[current->priority].tail = NULL;
  }
  current->flags &= ~KZ_THREAD_FLAG_READY;//Readyビットflagsを落とす
  current->next = NULL;//クリア

  return 0;
}

/* current thread をreadyqueueに繋げる */
static int putcurrent(void){
  puts("putcurrent:current threadをready queに繋げる\n");
  if (current == NULL){
    return -1;
  }

  if (readyque[current->priority].tail){
    readyque[current->priority].tail->next = current;
  } else {
    readyque[current->priority].head = current;
  }
  current->flags |= KZ_THREAD_FLAG_READY;//Readyビットflagsを立てる
  readyque[current->priority].tail = current;

  return 0;
}

/* threadの終了 */
static void thread_end(void){
  puts("thread_end:threadの終了\n");
  kz_exit();
}

/* threadのスタートアップ */
static void thread_init(kz_thread *thp){
  puts("thread_init:スレッドのメイン関数を呼び出す\n");
  /* スレッドのメイン関数を呼び出す */
  puts("  呼び出すメイン関数の名前は ");
  puts(thp->name); puts(" thread\n\n");
  thp->init.func(thp->init.argc, thp->init.argv);
  thread_end();//メイン関数から戻ってきたらthreadを終了する
}

/* system callの処理 */
static kz_thread_id_t thread_run(kz_func_t func, char *name, int priority, int stacksize, int argc, char *argv[]){
  puts("thread_run:システムコールの処理\n");
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
  thp->priority = priority;
  thp->flags = 0;
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

  /*
   * プログラムカウンタの設定
   * スレッドの優先度が0の場合、割り込み禁止に設定する
  */
  *(--sp) = (uint32)thread_init | ((uint32)(priority ? 0 : 0xc0) << 24);
  *(--sp) = 0; /*ER6*/
  *(--sp) = 0; /*ER5*/
  *(--sp) = 0; /*ER4*/
  *(--sp) = 0; /*ER3*/
  *(--sp) = 0; /*ER2*/
  *(--sp) = 0; /*ER1*/
  *(--sp) = (uint32)thp; /*ER0*/

  thp->context.sp = (uint32)sp;//コンテキストとしてSPを保存

  puts("  In thread run: "); puts(current->name);puts(" ");
  putcurrent();//システムコールを呼び出したスレッドをread queに戻す

  current = thp;
  puts("  In thread run: ");puts(current->name); puts(" ");
  putcurrent();//新規作成したスレッドをready queに接続する
  puts("新しく作成したスレッドのIDをreturnで返す\n");
  return (kz_thread_id_t)current;//新規作成したスレッド
}

/* スレッドの終了 */
static int thread_exit(void){
  puts("thread_exit:memoryリセット?\n");
  puts(current->name);
  puts(" Exit.\n");
  memset(current, 0, sizeof(*current));
  return 0;
}

/* システムコールの処理 kz_wait()：スレッドを待ち状態にする */
static int thread_wait(void){
  puts("  In thread wait： ");
  putcurrent();
  return 0;
}

/* システムコールの処理 kz_sleep()：スレッドのスリープ */
static int thread_sleep(void){
  puts("thread_sleep\n");
  return 0;//ready queから外されたままなのでスケジューリングされなくなる
}

/* システムコールの処理 kz_wakeup()：スレッドの起床 */
static int thread_wakeup(kz_thread_id_t id){
  puts("  In thread wakeup: ");
  putcurrent();//wakeupを呼び出したthreadをready queに戻す
  current = (kz_thread *)id;//引数で指定したスレッドをready queに戻す
  putcurrent();

  return 0;
}

/* システムコールの処理 kz_getid()：スレッドIDの取得 */
static kz_thread_id_t thread_getid(void){
  puts("  In thread_getid ");
  putcurrent();
  return (kz_thread_id_t)current;//TCBアドレスがスレッドIDになる
}
/* システムコールの処理 kz_chpri()：スレッドの優先度変更 */
static int thread_chpri(int priority){
  puts(" In thrad_chpri ");
  int old = current->priority;
  if (priority >= 0){
    current->priority = priority;//優先度変更
  }
  putcurrent();
  return old;
}
static void thread_intr(softvec_type_t type, unsigned long sp);

static int setintr(softvec_type_t type, kz_handler_t handler){
  puts("setintr:割り込みハンドラの登録\n");
  /* 割り込みを受け付けるために、ソフトウェア・割り込みベクタに
   * OSの割り込み処理の入口となる関数を登録する
   */
  softvec_setintr(type, thread_intr);//割り込み時にOSのハンドラが呼ばれるように
  handlers[type] = handler;

  return 0;
}


//システムコールの実行
static void call_functions(kz_syscall_type_t type, kz_syscall_param_t *p){
  puts("call_functions:システムコールの実行\n");
  puts("   結果は");
  /* システムコールの実行中にcurrentが書き換わる */
  switch(type){
  case KZ_SYSCALL_TYPE_RUN:
    p->un.run.ret = thread_run(p->un.run.func, p->un.run.name, p->un.run.priority,
        p->un.run.stacksize, p->un.run.argc, p->un.run.argv);
    break;
  case KZ_SYSCALL_TYPE_EXIT:
    thread_exit();
    break;
  case KZ_SYSCALL_TYPE_WAIT:
    p->un.wait.ret = thread_wait();
    break;
  case KZ_SYSCALL_TYPE_SLEEP:
    p->un.sleep.ret = thread_sleep();
    break;
  case KZ_SYSCALL_TYPE_WAKEUP:
    p->un.wakeup.ret = thread_wakeup(p->un.wakeup.id);
    break;
  case KZ_SYSCALL_TYPE_GETID:
    p->un.getid.ret = thread_getid();
    break;
  case KZ_SYSCALL_TYPE_CHPRI:
    p->un.chpri.ret = thread_chpri(p->un.chpri.priority);
    break;
  default:
    break;
  }
}

//システムコールの処理
static void syscall_proc(kz_syscall_type_t type, kz_syscall_param_t *p){
  puts("syscall_proc：システムコールの処理\n");
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
  puts("schedule：スレッドのスケジューリング\n");
  int i;

  for (i = 0; i < PRIORITY_NUM; i++){
    if (readyque[i].head)
      break;
  }
  if (i == PRIORITY_NUM){
    kz_sysdown();
  }

  current = readyque[i].head;
}

//システムコールの呼出し
static void syscall_intr(void){
  puts("syscall_intr:システムコールの呼び出し\n");
  syscall_proc(current->syscall.type, current->syscall.param);
}

//ソフトウェアエラーの発生
static void softerr_intr(void){
  //エラーが発生したらthreadを強制終了する
  puts("softerr_intr：ソフトウェアエラー\n");
  puts(current->name);
  puts(" DOWN.\n");
  getcurrent();
  thread_exit();
}

//割り込み処理の入り口関数
static void thread_intr(softvec_type_t type, unsigned long sp){
  puts("thread_intr：割り込み処理の入口関数\n");
  current->context.sp = sp;
  puts("  In thread_intr ");
  if (handlers[type])
    handlers[type]();//割り込みに対応した各ハンドラを実行する

  puts("  In thread_intr: ");

  schedule();
  puts("新たなスレッドの起床\n");
  dispatch(&current->context);//返ってこない
}

//初期スレッドを起動し、OSの動作を開始する
void kz_start(kz_func_t func, char *name, int priority, int stacksize, int argc, char *argv[]){
  puts("kz_start：初期スレッドを起動しOSの動作を開始する\n");
  current = NULL;
  //各種データの初期化
  memset(readyque, 0, sizeof(readyque));
  memset(threads, 0, sizeof(threads));
  memset(handlers, 0, sizeof(handlers));

  /* 割り込みハンドラの登録 */
  puts("In kz_start:system callの設定  ");
  setintr(SOFTVEC_TYPE_SYSCALL, syscall_intr);//システムコール
  puts("In kz_start:softerr intrの設定  ");
  setintr(SOFTVEC_TYPE_SOFTERR, softerr_intr);//ダウン要因発生

  /* システムコール発行不可なので直接関数を呼出してスレッドを作成する*/
  puts("In kz_start:thread_run:  ");
  current = (kz_thread *)thread_run(func, name, priority, stacksize, argc, argv);

  puts("kz_start finished: 新しいスレッドのIDをdispatchに渡す\n\n");

  puts("thread_runで定義された、thread_init()を呼び出す\n\n");
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
  puts("kz_syscall：システムコール呼出し用ライブラリ関数\n");
  current->syscall.type = type;
  current->syscall.param = param;
  puts("  In kz_syscall：トラップ割り込み発行\n\n");
  asm volatile ("trapa #0");//トラップ割り込み発行
}
