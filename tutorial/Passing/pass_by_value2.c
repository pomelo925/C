#include <stdio.h>
void setNum(int *num2); // the symbol * is to read the value of an address(which names num2 here)  

int main(){
    int num1 = 2;
    printf("before setNum(), num1: %d\n", num1);
    
    setNum(&num1);
    printf("after setNum(), num1: %d\n", num1); 
}

void setNum(int *num2){ /*(1) num2, a pointer variable, stores the address of num1 in this case 
                             (note that num2 has its own address as well, which differs from num1's address)*/
    printf("before setting, num2: %d\n", *num2);
    *num2 = 5; //(2) this changes the value whose address stored in num2
    printf("after setting, num2: %d\n", *num2);
}
