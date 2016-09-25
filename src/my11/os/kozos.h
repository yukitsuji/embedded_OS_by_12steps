#ifndef _KOZOS_H_INCLUDED_
#define _KOZOS_H_INCLUDED_

#include <defines.h>
#include <syscall.h>

/*システムコール*/

/*
 * kz_run：スレッドの生成
 * 引数として関数へのポインタを渡すとスレッドを作成し、
 * その関数の実行を開始する
 * 引数にはスレッド名、スレッドのスタックサイズなどを渡す
 * 戻り値は生成したスレッドのID番号「スレッド番号」と呼ぶ
*/
kz_thread_id_t kz_run(kz_func_t func, char *name, int priority, int stacksize, int argc, char *argv[]);//スレッドの起動のシステムコール

void kz_exit(void);//スレッド終了のシステムコール
int kz_wait(void);
int kz_sleep(void);
int kz_wakeup(kz_thread_id_t id);
kz_thread_id_t kz_getid(void);
int kz_chpri(int priority);
void *kz_kmalloc(int size);
int kz_kmfree(void *p);
int kz_send(kz_msgbox_id_t id, int size, char *p);
kz_thread_id_t kz_recv(kz_msgbox_id_t id, int *sizep, char **p);


/*ライブラリ関数*/
/*
 * kz_start：初期スレッドを起動し、OSの動作を開始する
 * スレッド生成はkz_run()で行うが、すステムコールであるためスレッドからしか実行できない
 * そのため、1つめのスレッドをkz_start()で生成し、そのスレッドからkz_run()によって
 * 本来必要なスレッドを生成していく。
 * スレッド生成用スレッドを「初期スレッド」と呼ぶ
*/
void kz_start(kz_func_t func, char *name, int priority, int stacksize, int argc, char *argv[]);
//致命的エラーの時に出す
void kz_sysdown(void);
//システムコールを実行する
void kz_syscall(kz_syscall_type_t type, kz_syscall_param_t *param);

/*
 * ユーザスレッドのメイン関数
*/
int test11_1_main(int argc, char *argv[]);
int test11_2_main(int argc, char *argv[]);
#endif
