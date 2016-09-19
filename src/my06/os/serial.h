#ifndef _SERIAL_H_INCLUDED_
#define _SERIAL_H_INCLUDED_
//送信用関数
int serial_init(int index);//デバイスの初期化
int serial_is_send_enable(int index);//送信可能か
int serial_send_byte(int index, unsigned char b);//一文字送信
//受信用関数
int serial_is_recv_enable(int index);//受信可能か
unsigned char serial_recv_byte(int index);//一文字受信
#endif
