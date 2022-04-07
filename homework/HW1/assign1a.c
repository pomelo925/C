// PME25 110033226 黃興佑
#include <stdio.h>
#include <stdbool.h>

int main(){
    // flag for running only once 
    bool flag1=true;    
    bool flag2=true;

    // print table all in a for loop !
    for(int row=0; row<11; row++){      // for loop of rows
        for(int column=0; column<11; column++){     // for loop of columns
            
            // if-else block: print horizontal line    
            if(row==1 && flag1){
                flag1=!flag1;  
                for(int hLine=0; hLine<95; hLine++){
                    printf("-");
                }
                printf("\n");
            }

            // if block: printf the first row 
            if(row==0){
                if(column>9) break;
                if(flag2){      
                    flag2=!flag2;
                    printf("\t|\t");
                }
                printf("%d\t", column);
            }else{      // print remaning rows 
                if(column==0){
                    printf("%d\t|\t", row-1);
                }else{
                    printf("%d\t", (row-1)*(column-1));
                }
            }
        }
        printf("\n");
    }
    return 0;
}