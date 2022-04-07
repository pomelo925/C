// PME25 110033226 黃興佑
#include <stdio.h>
#include <math.h>
#include <string.h>

#define N 3

int main(){
    // use array to store score data
    double scoreData[5][6]={0}; 

    //for loop: input
    for(int count=0; count<N; count++){
        printf("Enter student %d score:\n", count+1);
        scanf("%lf %lf %lf", &scoreData[count][0], &scoreData[count][1], &scoreData[count][2]);
    }
    
    //for loop: raw & adjust score calculation 
    for(int row=0; row<N; row++){
        if(row < N){
            scoreData[row][3]=0.3*scoreData[row][0]+0.3*scoreData[row][1]+0.4*scoreData[row][2];  // Raw score column
            scoreData[row][4]=pow(scoreData[row][3], 0.4)*12+25;   // adjusted score column
        }
    }

    //for loop: Avg row calculation
    for(int column=0; column<5; column++){
        for(int row=0; row<N; row++){
            scoreData[N][column]+=scoreData[row][column]/N;
        }
    }

    //for loop: SD row calculation
    for(int column=0; column<5; column++){
        for(int row=0; row<N; row++){
            scoreData[N+1][column]+=pow((scoreData[row][column]-scoreData[N][column]) , 2)/N;
        }
        scoreData[N+1][column] = sqrt(scoreData[N+1][column]);
    }
    
    //for loop: print
    for(int row=0, flag=0; row<N+2; row++, flag++){
        // if statement: print hline and text
        if(flag==0 || flag==3 ){            
            for(int line=0; line<=50; line++){
                printf("-");
            }
            printf("\n");
        if(flag==0){
            printf("Num\tAssign\tMiterm\tFinal\tRaw\tAdjusted\n");
            for(int line=0; line<=50; line++){
                printf("-");
            }
            printf("\n");
        }
    }
        // if statement: print scores of students
        if(row < N){
            printf("%d\t", row+1);
            for(int column=0; column<5; column++){
                if(column<=2) printf("%.0lf\t", scoreData[row][column]);
                else printf("%.1lf\t", scoreData[row][column]);
            }
        } else {    // else: print Avg row and SD row
            if(row==N) printf("Avg\t");
            if(row==N+1) printf("SD\t");
            for(int column=0; column<5; column++){
                printf("%.1lf\t", scoreData[row][column]);
            }
        }
        printf("\n");
    }
    return 0;
}

