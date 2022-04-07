#include<stdio.h>
#include <stdlib.h>

void cha(int *a){ // 函式裡的這個a存的是原本a的地址
    int b = 100;
    a = &b;  // 函式中的a現在變成存b的地址, 並不會影響到原本的a
}

int main(){
    int *a = (int*)malloc(sizeof(int));  // 有指標就要配malloc給他
    *a = 10;
    cha(a);
    printf("%d\n" , *a);
    return 0;
}