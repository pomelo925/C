#include <stdio.h>
#include <stdlib.h>

//goto 基本用法
int main(){
    for(int i=0; i<5; i++){
        if(i==3) goto stop;
        printf("hi\n");
    }

    printf("testing1");  //不會列印

    stop:{
        printf("bye\n");  //會列印
        printf("testing2\n");  //會列印
    }

    printf("testing3\n");   //會列印
    return 0;
}