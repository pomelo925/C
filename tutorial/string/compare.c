#include <stdio.h>
#include <string.h> //required

int main(){
    const char *str1 = "apple";
    const char *str2 = "apple";

    if(strcmp(str1, str2) == 0){    //strcmp(str1, str2): 比較兩字串是否相等
        printf("same");     //兩字串相等會回傳0
    } else{
        printf("not equal");
    }

    
}