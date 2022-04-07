#include<stdio.h>

//基礎應用
//小知識: 陣列名稱本身就是存放陣列位址的變數
int main(){
    int A[]={100, 2, 44, 75, 9111};     //其實A就是指標，精確來說是指標常數，不能被更改

//Method 1// 
    int *a = A;     //隱性轉型: 指標 a 指向 A 陣列第一個元素位址, 即 *a=(int *)&A[0];  又或者說其實沒轉型，本來就是指標存指標，所以這行其實沒意義
    for(int i=0; i<5; i++){
        printf("%d\t", A[i]);  //a[i]是int型別, 值為 *(a + i個元素長度) 
    }
   

//Method 2//   
    int (*b)[5] = &A; //指標 b 指向一個長度5的陣列(一定要丟給 b 長度是5的陣列不然compile error)
    printf("\nprint array: ");
    for(int i=0; i<sizeof(*b)/sizeof(*b[0]); i++){ //sizeof(*b):這個長度為5的陣列佔了多少記憶體空間; sizeof((*b)[0]):第一個元素佔了多少空間
        printf(" %d\t", (*b)[i]); //記得因為b是指向整個陣列, 所以要在前面加間接運算子
    }






}