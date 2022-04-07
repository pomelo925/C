#include<stdio.h>
#include<stdlib.h>

//輸入任意個數字，再輸出一樣的數
int main(){    
    int length =1;
    int *arr_new =0;
    int *arr_old =0;

    while(1){
        int input;
        scanf("%d", &input);
        if(input==0) break;

        arr_new = malloc(sizeof(int)*length); 
            //arr_new這個指標指向新的記憶體空間(而不是把原本和arr_old的空間覆蓋掉)
        arr_new[length-1] = input;
        for(int i=0; i<length-1; i++){
            arr_new[i] = arr_old[i];
        }

        free(arr_old);  //釋放不必要的記憶體
        arr_old = arr_new;  //現在arr_new和arr_old指向同一個陣列
        
        length++;
    }

    for(int i=0; i<length-1; i++){ //length要減一因為行25執行了一次length++
        printf("%d\t", arr_old[i]);
    }
}