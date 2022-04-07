#include<stdio.h>
#include<stdlib.h>

void insert_sort(int a[], int length);

int main(){
    int n[5]={0};
    printf("enter 5 numbers:");
    for(int i=1; i<=5; i++){
        scanf("%d", &n[i-1]);
    }

    insert_sort(n, 5);
    for(int i=0; i<=4; i++){
        printf("%d\t", n[i]);
    }
}

void insert_sort(int a[], int length){
    for(int i=1; i!=length; i++){
        int key=a[i];
        int j=i-1;

        while(key<=a[j] && j>=0){   //"j>=0" statment is to avoid j=-1, which occurs when a[1] < a[0] in the first loop. (a[-1] comes with unexpected results)
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

}



