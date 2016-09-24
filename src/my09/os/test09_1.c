#include <defines.h>
#include <lib.h>
#include <kozos.h>

int test09_1_main(int argc, char *argv[]){
  puts("test09_1 started.\n");
  puts("test09_1 sleep in. \n");
  kz_sleep();

  puts("test09_1 sleep out. \n");

  puts("test09_1 chpri in. \n");
  kz_chpri(3);//優先度を1-3に変更
  puts("test09_1 chpri out. \n");

  puts("test09_1 wait in.\n");
  kz_wait();
  puts("test09_1 wait out. \n");

  puts("test09_1 trap in.\n");
  asm volatile ("trapa #1");//トラップ発行
  puts("test09_1 trap out. \n");

  puts("test09_1 exit.\n");

  return 0;
}
