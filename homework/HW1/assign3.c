// PME25 110033226 黃興佑
#include <stdio.h>
#include <math.h>

int main(){

    // for loop: find primes between 3~100
    for(int num=3; num<=100; num++){
        for(int factor=2; factor<num; factor++){    // for loop: checking a number if it's a prime 
            if(num % factor == 0) break;    // break and check next number iff found not a prime 
            if(factor == num-1) printf("%d ", num);     // print if it's a prime    
        }
    }
}