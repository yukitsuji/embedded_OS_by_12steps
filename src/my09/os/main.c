#include <defines.h>
#include <lib.h>
#include <interrupt.h>
#include <kozos.h>

kz_thread_id_t test09_1_id;
kz_thread_id_t test09_2_id;
kz_thread_id_t test09_3_id;

/* システムタスクとユーザスレッドの起動 */
static int start_threads(int argc, char *argv[]){//初期スレッドのメイン関数
  test09_1_id = kz_run(test09_1_main, "test09_1", 1, 0x100, 0, NULL);
  test09_2_id = kz_run(test09_2_main, "test09_2", 2, 0x100, 0, NULL);
  test09_3_id = kz_run(test09_3_main, "test09_3", 3, 0x100, 0, NULL);

  puts("\nthreadの生成は終了：アイドル状態へと移行する\n");
  kz_chpri(15);
  puts("chpriの終了\n\n\n");
  INTR_ENABLE;
  while(1){
    asm volatile ("sleep");
  }

  return 0;
}

int main(void){
  INTR_DISABLE;

  puts("kozos boot succeed!\n");

  /* OS動作の開始 */
  kz_start(start_threads, "idle", 0, 0x100, 0, NULL);
  /* 戻ってこない */
  return 0;
}
