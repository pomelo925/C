#include <stdio.h>
#include <stdlib.h>

//單目運算符
/*
    單目運算是指運算符包括算術運算符、邏輯運算符、位邏輯運算符、位移運算符、關係運算符、自增自減運算符。
    一般是指在編程語言（計算機語言）的運算使用，如程序員運用C語言在編程中使用，為執行程序代碼的運算。
    包括 ! ,++,sizeof ,~,--,(type)
    => sizeof 不是函式 !!
*/

// sizeof操作符以位元組形式給出了其運算元的儲存大小
// 運算元可以是一個表示式或括在括號內的型別名。運算元的儲存大小由運算元的型別決定。

int main(){
//Usage:
    int demo=5487;
    printf("sizeof(int): %d\n", sizeof(int)); //型別(type name)一定要括號
    printf("sizeof(int): %d\n", sizeof demo); //因為不是函式, 所以其實可以不用括號
    printf("sizeof(demo): %d\n", sizeof(demo));
    

    int a[10] ={0};
    printf("sizeof(a): %d\nsizeof(&a): %d\nsizeof(a[0]): %d\n", sizeof(a), sizeof(&a), sizeof(a[0]));

    int *b = calloc(sizeof *b, 10);
    printf("sizeof(b): %d\nsizeof(*b): %d\n", sizeof(b), sizeof(*b));

    int *c = malloc(sizeof *c *10);
    printf("sizeof(c): %d\nsizeof(*c): %d\n", sizeof(c), sizeof(*c));
}