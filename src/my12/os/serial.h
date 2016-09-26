#ifndef _SERIAL_H_INCLUDED_
#define _SERIAL_H_INCLUDED_
//送信用関数
int serial_init(int index);//デバイスの初期化
int serial_is_send_enable(int index);//送信可能か
int serial_send_byte(int index, unsigned char b);//一文字送信

int serial_intr_is_send_enable(int index);//送信割り込みは有効か
void serial_intr_send_enable(int index);//送信割り込み化
void serial_intr_send_disable(int index);//送信割り込み無効化

//受信用関数
int serial_is_recv_enable(int index);//受信可能か
unsigned char serial_recv_byte(int index);//一文字受信

int serial_intr_is_recv_enable(int index);//受信割り込みは有効か
void serial_intr_recv_enable(int index);//受信割り込みの有効化
void serial_intr_recv_disable(int index);//受信割り込みの無効化

#endif
