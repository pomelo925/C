// PME25 110033226 黃興佑
#include <stdio.h>
#include <stdbool.h>

int main(){
    // flag for running only once 
    bool flag1=true;
    bool flag2=true;
    int rowMax,columnMax;  // input 

    // get input till users enter suitable numbers
    do{
        printf("enter two numbers(1~9): ");
        scanf("%d%d", &rowMax, &columnMax);
    }while(rowMax >9 || rowMax <=0 || columnMax >9 || columnMax <=0);

    // print table all in a for loop
    for(int rowCount=0; rowCount<rowMax+2; rowCount++){     // for loop of rows
        for(int columnCount=0; columnCount<columnMax+2; columnCount++){     // for loop of columns

            // if-else block: print horizontal line  
            if(rowCount==1 && flag1){
                flag1=!flag1;
                for(int hLine=0; hLine<9*(columnMax+1)+4; hLine++){     // for loop: printing adequate length of hLine
                    printf("-");
                }
                printf("\n");
            }
            
            // if block: printf the first row     
            if(rowCount==0){
                if(columnCount>columnMax) break;
                if(flag2){
                    flag2=!flag2;
                    printf("\t|\t");
                }
                printf("%d\t", columnCount);
            }else{      // print remaning rows 
                if(columnCount==0){
                    printf("%d\t|\t", rowCount-1);
                }else{
                    printf("%d\t", (rowCount-1)*(columnCount-1));
                }
            }
        }
        printf("\n");
    }
    return 0;
}