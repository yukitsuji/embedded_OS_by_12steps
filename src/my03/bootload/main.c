#include <defines.h>
#include <serial.h>
#include <lib.h>

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

int global_data = 0x10;//.dataセクションへ
int global_bss;//.bssセクションへ
static int static_data = 0x20;//.dataセクションへ
static int static_bss;//.bssセクションへ

static void printval(void){
  puts("global_data = "); putxval(global_data, 0); puts("\n");
  puts("global_bss = "); putxval(global_bss, 0); puts("\n");
  puts("static_data = "); putxval(static_data, 0); puts("\n");
  puts("static_bss = "); putxval(static_bss, 0); puts("\n");
}

int main(void){
  init();
  puts("Hello World\n");
  printval();
  puts("overwrite variables. \n");
  global_data = 0x20;
  global_bss = 0x30;
  static_data = 0x40;
  static_bss = 0x50;
  printval();
  while(1)
    ;
  return 0;
}
