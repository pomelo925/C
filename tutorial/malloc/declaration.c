#include <stdio.h>
#include <stdlib.h>

int main(){
// Declaration 1 (suggested)
    int *a = malloc(sizeof *a *8);
    *a = 3555;

//Declaration 2 (not suggested)
    int *b = (int*) malloc(sizeof(int)*8);
    //不推薦的原因是malloc預設是void*, 而void指標會自動且安全地指向其他種類指標(automagically)
    *b = 2030; 
}