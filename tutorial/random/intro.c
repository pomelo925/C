#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//rand 函數是使用 LCG（Linear Congruential Generator）來產生亂數的
//他的優點只是快速、方便而已
//但它本身所產生的亂數品質沒有非常好，再怎麼校正效果都有限

int main(){
// RAND_MAX是一個marco, 這裡可以看到定義為32767, 代表亂數會介於0和32767
    printf("RAND_MAX: %d\n", RAND_MAX);   

// 宣告一個亂數(Worse)
    srand(2000);  //srand是亂數種子, 相同的亂數種子會跑出相同的亂數序列
    int x = rand();     //rand()預設是整數
    printf("x: %d\n", x);   
    

// 宣告一個亂數(Better)
    srand(time(NULL));  //time(NULL)會隨時間變化, 所以亂數種子會一直變化
    int y = rand();
    printf("y: %d\n", y);

    return 0;   
}