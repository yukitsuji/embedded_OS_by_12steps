#include <defines.h>
#include <serial.h>
#include <lib.h>
#include <xmodem.h>
#include <elf.h>

//データ領域とBSS領域を初期化し、シリアルの初期化を行う
static int init(void){
  //以下はリンカスクリプトで定義されているシンボル
  extern int erodata, data_start, edata, bss_start, ebss;
  /*
   * データ領域とBSS領域を初期化する。この処理以降でないと、
   * グローバル変数が初期化されていないので注意
   *
   * &data_start(RAM上の.dataセクションの先頭アドレス)に、
   * &erodata(ROM上の.rodataセクションの終端なので.ROM上のdataセクションの先頭)
   * をコピーする。
   *
   * &bss_start以降を0クリアする。初期値未指定の変数には0が指定される。
   */
  memcpy(&data_start, &erodata, (long)&edata - (long)&data_start);
  memset(&bss_start, 0, (long)&ebss - (long)&bss_start);

  //シリアルの初期化
  serial_init(SERIAL_DEFAULT_DEVICE);

  return 0;
}

//メモリの16進ダンプ出力
static int dump(char *buf, long size){
  long i;
  if (size < 0){
    puts("no data.\n");
    return -1;
  }
  for (i=0; i<size; i++){
    putxval(buf[i], 2);//2桁の16進数の表示
    if ((i & 0xf) == 15){
      puts("\n");
    }else{
      if ((i & 0xf) == 7) puts(" ");
      puts(" ");
    }
  }
  puts("\n");
  return 0;
}

//waitサービス関数
static void wait(){
  volatile long i;
  for (i = 0; i < 300000; i++){
    ;
  }
}

int main(void){
  static char buf[16];//BSS
  static long size = -1;//data
  static unsigned char *loadbuf = NULL;//data
  char *entry_point;
  void (*f)(void);
  extern int buffer_start; //リンカスクリプトで定義されているバッファ

  init();
  puts("kzload (kozos boot loader) started.\n");

  while(1){
    puts("kzload> ");//プロンプト表示
    gets(buf);//シリアルからのコマンド受信

    if (!strcmp(buf, "load")){//XMODEMでのファイルダウンロード
      loadbuf = (char *)(&buffer_start);
      size = xmodem_recv(loadbuf);
      wait();//転送アプリが終了し、端末アプリに制御が戻るまで待ち合わせる
      if (size < 0){
        puts("\nXMODEM receive error!\n");
      }else{
        puts("\nXMODEM receive succeeded\n");
      }
    }else if(!strcmp(buf, "dump")){
      puts("size: ");
      putxval(size, 0);
      puts("\n");
      dump(loadbuf, size);
    }else if(!strcmp(buf, "run")){
      entry_point = elf_load(loadbuf);/*メモリ上に展開*/
      if (!entry_point){
        puts("run error\n");
      }else{
        puts("starting from entry point: ");
        putxval((unsigned long)entry_point, 0);
        puts("\n");
        f = (void (*)(void))entry_point;
        f();
      }
    }else {
      puts("unknown.\n");
    }
  }
  return 0;
}
