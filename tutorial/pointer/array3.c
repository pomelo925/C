#include <stdio.h>
#include <stdlib.h>

//用雙重指標印出二維陣列的地址
int main(){
    int num[3][4]= {{12,33,66,88},
                    {74,90,21,25},
                    {99,41,20,37}};
    int n, m;

    for(m=0; m<3; m++){
        for(n=0; n<4; n++)
            printf("num[%d][%d] = %d, address: %p\n",m ,n, *(*(num+m)+n), *(num+m)+n);
    }

    printf("**num = %d\n", **num);
    return 0;
}