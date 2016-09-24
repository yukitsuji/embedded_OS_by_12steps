#include <defines.h>
#include <lib.h>
#include <kozos.h>

int test09_2_main(int argc, char *argv[]){
  puts("test09_2 started.\n");
  puts("test09_2 sleep in. \n");
  kz_sleep();

  puts("test09_2 sleep out. \n");

  puts("test09_2 chpri in. \n");
  kz_chpri(3);//優先度を1-3に変更
  puts("test09_2 chpri out. \n");

  puts("test09_2 wait in.\n");
  kz_wait();
  puts("test09_2 wait out. \n");

  puts("test09_2 trap in.\n");
  asm volatile ("trapa #1");//トラップ発行
  puts("test09_2 trap out. \n");

  puts("test09_2 exit.\n");

  return 0;
}
