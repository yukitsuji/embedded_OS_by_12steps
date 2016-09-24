#include <defines.h>
#include <kozos.h>
#include <syscall.h>
#include <lib.h>

/* システムコール */
kz_thread_id_t kz_run(kz_func_t func, char *name, int priority, int stacksize, int argc, char *argv[]){
  puts("\n");
  puts("kz_run:システムコール\n");
  puts("In kz_run：スレッドの名前は"); puts(name);puts("\n");
  kz_syscall_param_t param;
  param.un.run.func = func;
  param.un.run.name = name;
  param.un.run.priority = priority;
  param.un.run.stacksize = stacksize;
  param.un.run.argc = argc;
  param.un.run.argv = argv;
  puts("  In kz_run：");
  kz_syscall(KZ_SYSCALL_TYPE_RUN, &param);
  return param.un.run.ret;//システムコールの応答が構造体に格納されて帰る
}

void kz_exit(void){
  puts("  In kz_exit\n");
  kz_syscall(KZ_SYSCALL_TYPE_EXIT, NULL);//システムコールを呼び出す
}

int kz_wait(void){
  puts(" In kz_wait  ");
  kz_syscall_param_t param;
  kz_syscall(KZ_SYSCALL_TYPE_WAIT, &param);
  return param.un.wait.ret;
}

int kz_sleep(void){
  puts(" In kz_sleep ");
  kz_syscall_param_t param;
  kz_syscall(KZ_SYSCALL_TYPE_SLEEP, &param);
  return param.un.wait.ret;
}

int kz_wakeup(kz_thread_id_t id){
  puts(" In kz_wakeup ");
  kz_syscall_param_t param;
  param.un.wakeup.id = id;
  kz_syscall(KZ_SYSCALL_TYPE_WAKEUP, &param);
  return param.un.wakeup.ret;
}

kz_thread_id_t kz_getid(void){
  puts(" In kz_getid ");
  kz_syscall_param_t param;
  kz_syscall(KZ_SYSCALL_TYPE_GETID, &param);
  return param.un.getid.ret;
}

int kz_chpri(int priority){
  puts(" In kz_chpri ");
  kz_syscall_param_t param;
  param.un.chpri.priority = priority;
  kz_syscall(KZ_SYSCALL_TYPE_CHPRI, &param);
  return param.un.chpri.ret;
}
