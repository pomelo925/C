#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr_length;
    int *a;
    a = calloc(sizeof(int), arr_length); 

    //malloc和calloc的差別只在於宣告方式稍微不同和calloc才有初始化所有空間為0
    //malloc長度用乘的, calloc用逗號分開
    return 0;
}