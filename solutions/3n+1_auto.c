#include<stdio.h>

int operate(int a);

int main(){
    int num=2, time=0;
    for(int i=2; i<=100000; i++){
        if(operate(i)>time){
            time=operate(i);
            num=i;
        }
    }

    printf("number: %d; calculating times: %d", num ,time);
    return 0;
}

int operate(int a){
    int time =0;
    while (a!=1){
        if(a%2==1){
            a=a*3+1;
            time++;
        }
        else{
            a/=2;
            time++;
        }
    }

    return time;
}