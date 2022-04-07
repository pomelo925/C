#include <stdio.h>
#include <stdlib.h>  //Required
    
int main (){
    //字串轉數字
    int num_int;
    double num_double;
    char str_int[30] = "435";         //將要被轉換為整型的字串
    char str_double[30] = "436.55";  //將要被轉換為浮點型的字串
  
    num_int = atoi(str_int);          //轉換為整型值
    num_double = atof(str_double);  //轉換為浮點型值
  
    printf("num_int: %d\n", num_int);
    printf("num_double: %lf\n", num_double);
  

    //數字轉字串
    int a = 31245;
    double b = 429.1103;
    char A[50];
    char B[50];

    itoa(a, A, 10); // itoa(數字, 字串, 進制) 
    puts(A);    //字串可以用puts直接列印

    gcvt(b, 4, B); // gcvt(數字, 共顯示幾位(不含小數點), 字串)
    puts(B);


    return 0;
}