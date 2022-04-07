#include<stdio.h>
#include<stdlib.h>

int main(){
    int n[5]={0};
    printf("enter 5 numbers:");
    for(int i=1; i<=5; i++){
        scanf("%d", &n[i]);
    }

    //Bubble Sort
    /*take ascending order for instance: 
        1. compare n[0] and n[1], exchange them if n[0]>n[1], and compare n[1] and n[2]... until n[k-1] and n[k] 
        2. now n[k] will definitely be the largest element in the array 
        3. do step 1 again, yet we only need check to n[k-1] (and n[k-1] will be the second largest element)
        4. repeating step 3 for k-1 times   
    */

    for(int j=4; j>=0; j--){
        for(int i=0; i<=j; i++){
            if(n[i]>n[i+1]){        // > and < determines ascending and descending order respectively
                int temp = n[i+1];
                n[i+1] =n[i];
                n[i]=temp;
            }
        }   
    }

    for(int i=1; i<=5; i++){
        printf("%d\n", n[i]);
    }
   

}