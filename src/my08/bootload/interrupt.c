#include <defines.h>
#include <intr.h>
#include <interrupt.h>

/*
 * ソフトウェア・割り込みベクタの初期化
 * 各ソフトウェア・割り込みベクタに対して、ベクタアドレスにNULLを指定する
*/
int softvec_init(void){
  int type;
  for (type = 0; type < SOFTVEC_TYPE_NUM; type++){
    softvec_setintr(type, NULL);
  }
  return 0;
}

/*
 * ソフトウェア・割り込みベクタの設定
 * ハンドラをベクタに設定する
*/
int softvec_setintr(softvec_type_t type, softvec_handler_t handler){
  SOFTVECS[type] = handler;
    return 0;
}

/*
 * 共通割り込みハンドラ
 * ソフトウェア・割り込みベクタを見て、各ハンドラに分岐する
 * ソフトウェア・割り込みベクタの配列（SOFTVECS[])を参照し、
 * 設定されたハンドラを割り込み種別に応じて呼び出す
*/
void interrupt(softvec_type_t type, unsigned long sp){
  softvec_handler_t handler = SOFTVECS[type];
  if (handler){
    handler(type, sp);
  }
}

