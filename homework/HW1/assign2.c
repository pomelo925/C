// PME25 110033226 黃興佑
#include <stdio.h>

int main(){

    int max, ans=0, temp=1;     // ans for answer, temp records each item
    printf("please enter a number (>0): ");
    scanf("%d", &max);  // max records input

    for(int count=1; count<=max; count++){      // for loop: number of items 
        for(int times=0; times<8; times++){     // for loop: multiple itself eight times
            temp *= count;
        }
        ans += temp;  // add item to ans
        temp = 1;   // prepare to recalculate next item 
    }
    printf("%d", ans);
}
