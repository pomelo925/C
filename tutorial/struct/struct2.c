#include<stdio.h>

typedef struct point point;
typedef struct line line;

struct point{
    float x;
    float y;
};

struct line{
    point pt;   //結構內的結構, 常見用法, 但不可自己結構本身(不能遞迴)
    char *color;
};

int main(){
    //寫法一
    line graph1 = {
        .pt = { .x = 2.4, .y = 334.4 },
        .color = "yellow"
    };

    puts(graph1.color);
    printf("%f\n%f\n", graph1.pt.x, graph1.pt.y); //呼叫結構內的結構

    //寫法二
    line graph2;
    graph2.color = "green";
    graph2.pt.x = 77.5;
    graph2.pt.y = 93;
    
    //寫法三
    line graphs[] = {   //用陣列儲存結構 
        {.pt = {.x=10.2, .y=43}, .color = "red"},
        {.pt = {.x=123.76, .y=0}, .color = "azure"},
        {.pt = {.x=99.1, .y=-231.6}, .color = "greenish"},
    };



}

