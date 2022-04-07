#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
//Method 1
    char ch1[6];
    strcpy(ch1, "apple");   //5個字要給6個記憶體位置, 結尾算一個
    puts(ch1);

// Method 2: Bad
    char *ch2 = "banana"; //指向常量的指標ch2, 可以改變指向位址, 但不能更改banana.
    puts(ch2);
// Method 2: Better
    char *ch3 = malloc(sizeof(char)*6);     
    ch3 = "elephant";
    puts(ch3);


}