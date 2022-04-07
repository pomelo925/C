#include<stdio.h>

/*Problem (3n+1):
    3n＋1猜想是指對於每一個正整數：
    如果它是奇數，則對它乘3再加1，如果它是偶數，則對它除以2，
    如此循環，最終都能夠得到1。
    輸入一個數並輸出計算次數。
  */
void operate(int a, int *time_op);
int main(){
    int num, time_op;
    int time=0;

    for(int i=1; i<=100000; i++){
        operate(i, &time_op);
        if(time_op > time){
            time = time_op;
            num = i;
        }
    }

    printf("number:%d\ncalculating times: %d", num, time);
}

void operate(int a, int *time_op){
    *time_op=0;

    while (a!=1){
        if(a%2==1){
            a=a*3+1;
            *time_op+=1;
        }
        else{
            a/=2;
            *time_op+=1;
        }
    }
    return;
}