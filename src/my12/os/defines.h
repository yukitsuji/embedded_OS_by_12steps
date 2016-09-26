#ifndef _DEFINES_H_INCLUDED_
#define _DEFINES_H_INCLUDED_

#define NULL ((void *) 0) //NULLポインタの定義
#define SERIAL_DEFAULT_DEVICE 1//標準のシリアルデバイス

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

typedef uint32 kz_thread_id_t;
typedef int (*kz_func_t)(int argc, char *argv[]);//スレッドのメイン関数の型
typedef void (*kz_handler_t)(void);//割り込みハンドラの型


/*
 * MSGBOX_ID_CONSINPUT
 * シリアル受信割り込みの発生時に割り込みハンドラから
 * 受信文字をコマンド・スレッドに送信する際にメッセージボックスとして利用される
 *
 * MSGBOX_ID_CONSOUTPUT
 * コマンドスレッドからコンソール・ドライバ・スレッドに
 * 文字列の出力依頼を行なう際に、メッセージボックスとして利用される
*/
typedef enum{
  MSGBOX_ID_CONSINPUT = 0,
  MSGBOX_ID_CONSOUTPUT,//コンソールからの入力用
  MSGBOX_ID_NUM//コンソールからの出力用
} kz_msgbox_id_t;

#endif
