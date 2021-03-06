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

void *kz_kmalloc(int size){
  kz_syscall_param_t param;
  param.un.kmalloc.size = size;
  kz_syscall(KZ_SYSCALL_TYPE_KMALLOC, &param);
  return param.un.kmalloc.ret;
}

int kz_kmfree(void *p){
  kz_syscall_param_t param;
  param.un.kmfree.p = p;
  kz_syscall(KZ_SYSCALL_TYPE_KMFREE, &param);
  return param.un.kmalloc.ret;
}

int kz_send(kz_msgbox_id_t id, int size, char *p){
  kz_syscall_param_t param;
  param.un.send.id = id;
  param.un.send.size = size;
  param.un.send.p = p;
  kz_syscall(KZ_SYSCALL_TYPE_SEND, &param);
  return param.un.send.ret;
}

kz_thread_id_t kz_recv(kz_msgbox_id_t id, int *sizep, char **pp){
  kz_syscall_param_t param;
  param.un.recv.id = id;
  param.un.recv.sizep = sizep;
  param.un.recv.pp = pp;
  kz_syscall(KZ_SYSCALL_TYPE_RECV, &param);
  return param.un.recv.ret;
}
