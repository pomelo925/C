#include <stdio.h>
#include <stdlib.h>

#define MAX 3

//以指標來表示結構陣列
int main(){
    //struct可以寫在main函數裡
    struct data{
        char name[10];
        int math;
    } student[MAX] = {{"Mary", 87}, {"Flora", 63}, {"Jenny", 74}};

    static int index = 0;
    int m = student->math; //m = 87

    for(int i=1; i<MAX; i++){
        if((student+i)->math > m){
            m = (student+i)-> math;
            index = i;
        }
    }

    printf("%s has the highest score\n", (student + index)-> name);
    printf("his/her score is %d", (student + index)-> math);
    return 0;
}