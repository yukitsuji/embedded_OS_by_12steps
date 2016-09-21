#各種初期設定
/*
スタートアップで初期設定後、main関数を呼び出す
jsr@_main メイン関数の呼出し

_startから処理が実行する
スタックポインタの設定後、main()に飛ぶ

CPUが割り込み線というピンを持っており、
ピンに電圧がかかるとCPUが割り込み発生を検知して、
割り込み処理に入る
→割り込みベクタ方式を用いる
(1)ハンドラのアドレスを記述しておく特定のアドレスを設定しておく
   CPUは割り込みベクタを参照してハンドラの配置場所を特定する
   H8は割り込みベクタが、0x000000~0x0000ffのメモリ上に配置されている(256bit)

   リセットベクタは電源がONになったときに参照される？
   ベクタの設定はld.scr

ld.scr
リンカスクリプトと呼ばれるファイル。
オブジェクトファイルをリンクして実行形式を生成する際に、関数や変数をアドレス上にどのように配置するかを指定する。

電源ON時にには割り込みベクタとしてvectors[0]を参照して、
vectors[0]に格納されている_startから処理を開始する＝リセットベクタとも呼ばれる
*/
.h8300h
	.section .text
	.global	_start
#	.type	_start,@function
_start:#アセンブラでは関数名を変数名などには＿を付ける
	mov.l	#_bootstack,sp
	jsr	@_main

1:
	bra	1b
  .global _dispatch
# .type _dispatch,@function
_dispatch:
  mov.l @er0,er7
  mov.l @er7+,er0
  mov.l @er7+,er1
  mov.l @er7+,er2
  mov.l @er7+,er3
  mov.l @er7+,er4
  mov.l @er7+,er5
  mov.l @er7+,er6
  rte
