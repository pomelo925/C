#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

// 1到6的整數亂數1
    int dice = rand()%6 + 1;
    printf("dice: %d\n", dice);   //狄利克雷抽屜原理, 會有某些數的機率高一點點

// 1到6的整數亂數2
    int dice2 = (int)((6-1+1)*((double)rand()/RAND_MAX))+1;  //狄利克雷抽屜原理, 會有某些數的機率高一點點
    printf("dice: %d\n", dice); 

// 特定範圍浮點數
    double min = 3.7;
    double max = 8.2;
    double number = ((max-min)*rand()/(RAND_MAX))+ min;  //含3.7與8.2
    printf("number: %f", number);


}