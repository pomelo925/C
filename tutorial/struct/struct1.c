#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

// struct 的基本用法 //
typedef struct person p;    //自定義指令(把struct person 設為 p)

struct person{     //struct 要在main前, 而且不能像function一樣只先寫名稱, 要全寫完
   char *name;     //name指標將指向字元陣列的第一個元素地址
   unsigned int age;
};     //分號記得


typedef struct demonstrate demon;

struct demonstrate{
   char a;
   int b;
   double c;
}__attribute__((packed));  //不讓記憶體對齊以減少記憶體空間使用, 但計算速度會下降


int main(){
   struct person Tom = {"Tom", 26}; //名字和年齡順序不可調換
   struct person Mary = {
        .age=18,    //用逗號區隔
        .name="Mary"
   };  //分號記得
   printf("%d\n", Mary.age); 

   p Steve = {"Steve", 78};   //typedef簡化命名

   printf("size of struct person: %d\n", sizeof(p));   //結構的變數總共需要多少空間
   printf("size of demon: %d", sizeof(demon))   ;
}