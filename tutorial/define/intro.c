#include<stdio.h>
#include<stdlib.h>

// define基本用法
// define可以是字串,常數或函數
#define BEGIN {
#define END }

#define pi 3.1415926   //優點: 節省記憶體空間(比起const int pi=3.1415926) + pi不能被更改
#define word "Think of all the things \
we have shared anfd seen.\n"    //行10: 用'\'寫下一行

int main()
BEGIN
    for(int i=1; i<=5; i++)
    BEGIN
        printf("*");
    END
END