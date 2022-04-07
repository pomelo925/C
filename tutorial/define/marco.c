#include<stdio.h>
#include<stdlib.h>

#define SQUARE(X) X*X   //定義巨集(marco) SQUARE為 ’變數*變數’
int main(){
    int m;
    scanf("%d", &m);
    printf("%d*%d=%d\n", m,m,SQUARE(m));
    return 0;
}

//函數 or 巨集?
/*
    假設相同內容要被使用1000次:
    巨集marco: 占用記憶體較多, 執行速度快(因為程式執行流程不用移轉)
    函式: 占用記憶體少, 執行速度慢
    ...
    見仁見智 <-> 過度濫用某一種都可能造成閱讀困難
*/