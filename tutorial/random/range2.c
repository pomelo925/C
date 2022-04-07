#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

int randInt(int min, int max);

// 寫一個每個變數取到機率較平均的函式
int main(){
    srand(time(NULL));

    /* 指定亂數範圍 */
    int min = 4;
    int max = 10;

    /* 產生 [min , max] 的整數亂數 */
    int x = randInt(min, max);
    printf("%d", x);

    return 0;
}

int randInt(int min, int max) {
    static int random;
    int interval = max-min;
    int end = RAND_MAX/interval;
    end *= interval;

    do{
        random = rand();
    } while ( random > end );

    return random;
}