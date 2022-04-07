#include <stdio.h>
#include "D:\pomelo\code\C\practice\summary\define\area.h"

int main(){
    float width=7 ,length=8;
    float r=1;

    printf("circle: %f\n", CIRCLE(r));
    printf("rectangle: %f\n", RECTANGLE(width, length));

}