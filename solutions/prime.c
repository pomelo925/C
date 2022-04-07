#include<stdio.h>

int num;

int main(){
    printf("enter a number to see whether it's a prime:");
    scanf("%d",&num);

    if(num==1){
        printf("not a prime.");
    }

    else if(num==2){
        printf("prime.");
    }

    else{
        for(int i=2; i<=num/2; i++){
            if(num%i==0) {
                printf("not a prime.");
                break;
            }

            else{
                if(i==num/2) printf("prime.");
            }
        }

    }
}