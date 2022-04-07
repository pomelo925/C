#include<stdio.h>

//函式傳遞陣列時可將"型態"和"長度"用兩個變數一起表示

int min(int k[], int K);

int main(){
    int a[5]={34, 66, 211, 5, 9};
    printf("%d", min(a, 5));
}

int min(int k[], int K){    // k決定陣列型態, K決定長度
    int ans =k[0];
    for(int i=1; i<K; i++){
        if(k[i]<ans) ans=k[i];
    }
    return ans;
}
