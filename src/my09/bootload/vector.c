#include <defines.h>

extern void start(void);//スタートアップ
extern void intr_softerr(void);
extern void intr_syscall(void);
extern void intr_serintr(void);
/*
 *割り込みベクタの設定
 *リンカ・スクリプトにより、先頭番地に配置される
 */
void (*vectors[])(void) = {
  start, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  intr_syscall, intr_softerr, intr_softerr, intr_softerr, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, intr_serintr, intr_serintr, intr_serintr, intr_serintr,
  intr_serintr, intr_serintr, intr_serintr, intr_serintr,
  intr_serintr, intr_serintr, intr_serintr, intr_serintr,
};
