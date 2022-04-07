#include <stdio.h>
#include<stdalign.h>
#include<stdlib.h>

typedef struct person person;

struct person{
    int age;
    int height;
    person *next;
};

//使用指標指向結構
int main(){
    person *rose = malloc(sizeof(person));
    rose -> age = 13;          //寫法一(簡潔, 推薦)
    (*rose).height = 170;      //寫法二

    printf("age: %d\nheight: %d", (*rose).age, rose -> height);
    
    rose -> next = NULL ;
    free(rose);

}