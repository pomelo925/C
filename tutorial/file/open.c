#include <stdio.h>

int main(){
    FILE *fptr; //宣告一個指向檔案的指標(一定要是指標)
    fptr = fopen("D:\\pomelo\\code\\C\\practice\\summary\\file\\example.txt", "w");    //fopen("檔案名", "存取模式")

    if(fptr != NULL){
        printf("open successfully");
    }
    else printf("fail");

    /****存取模式****/
    //(1) r: 讀取資料; 若檔案不存在，fopen()失敗 => 傳入NULL至fpt
    //(2) w: 寫入資料; 若檔案不存在，系統會自動建立此檔案
    //(3) a: 附加於檔案之後, 開啟一個檔案, 可將資料寫入此檔案末端; 若檔案不存在，系統會自動建立此檔案
}