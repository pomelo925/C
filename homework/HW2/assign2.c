// 110033226 PME25 黃興佑

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 999

void findPrime(int index[]); //find the prime of array
void SOE(int index[]); //Sieve of Eratosthenes
void printPrime(int index[]); //print prime members
 

int main(){
    int index[999];
    findPrime(index);
    return 0;
}
1
void findPrime(int index[]){
    // for loop: set all elements to 1
    for(int i=0; i<MAX; i++){
        *(index+i) = 1;
    }
    
    SOE(index);
    printPrime(index);
}

void SOE(int index[]){
 for(int factor=2; factor<=MAX-1; factor++){   // factor (2 to 999)
        for(int element=0; element<MAX-2; element++){     // elements of index array
            if((element+2)%factor==0 && element+2!=factor) index[element]=0;
        }
    }
}

void printPrime(int index[]){
    for(int prime=0; prime< MAX-2; prime++){   // print the prime number from 2 to 999
        if(index[prime]==1){    
            printf("%d\t", prime+2);    // "+2" is to contemplate the differences of "index element" and " its representing number"
        }
    }
}

