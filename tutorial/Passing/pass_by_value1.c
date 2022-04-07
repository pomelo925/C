#include <stdio.h>
void setNum(int num2);

int main(){
    int num1 = 2;
    printf("before setNum(), num1: %d\n", num1);
    
    setNum(num1);
    printf("after setNum(), num1: %d\n", num1); // (2) verify that C impements PASS-BY-VALUE

}

void setNum(int num2){
    printf("before setting, num2: %d\n", num2);
    num2 = 5;   // (1) the value of num2 has changed but this does nothing with num1
    printf("after setting, num2: %d\n", num2);
}