#include<stdio.h>

// Explain how function calls array 

int max(int m[]); 

int main(){
    int a[]={23, 55, 88, 17, 44};
    printf("%d", max(a));  //印出陣列中最大的元素
}

int max(int m[]){
/*
        因為直接複製陣列可能會過度浪費記憶體, C99其實是將m作為指向陣列中第一個元素的指標.
        程式碼說明:
    1) main 函數
        printf("%d", max(a));   =>   printf("%d, max(&a[0]) // 隱性轉型("陣列" => 第一個元素"位址") 
    
    2) max 函數 
        int max(int m[]){...}    =>   int max(int *m){...}  // m[]其實是*m
*/

    int ans=m[0]; 
/*
        m[0]就是*m, 而 m[1] 等於 *m++ 等於 *(m++) 等於 a[1] ...以此類推
        也就是說, 指標 m 會自動根據陣列元素的型態去推算下一個記憶體位址並讀取
*/
    for(int i=1; i<=4; i++){
        if(m[i]>ans) ans=m[i];
    }

    return ans;
}