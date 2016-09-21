#include <defines.h>
#include <lib.h>
#include <interrupt.h>
#include <kozos.h>

/* システムタスクとユーザスレッドの起動 */
static int start_threads(int argc, char *argv[]){//初期スレッドのメイン関数
  kz_run(test08_1_main, "command", 0x100, 0, NULL);//コマンド処理スレッドを起動する
  return 0;
}

int main(void){
  INTR_DISABLE;

  puts("kozos boot succeed!\n");

  /* OS動作の開始 */
  kz_start(start_threads, "start", 0x100, 0, NULL);
  /* 戻ってこない */
  return 0;
}
