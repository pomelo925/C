#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//大數相減
void reverse(char ch[], int len); //翻轉陣列
void ch2int (char ch[], int in[]); //char陣列轉int陣列
void minus(char ch1[], char ch2[]); //印出相加結果
bool compare(int in1[], int in2[]); //減法須要先比大小


int main(){
    char numA[100]={'0'}, numB[100]={'0'};  //先給定一個足夠大的陣列，但用malloc會更好
    char arith;

    printf("number A: ");
    gets(numA);
    printf("number B: ");
    gets(numB);
  
    reverse(numA, strlen(numA));
    reverse(numB, strlen(numB));

    minus(numA, numB);

    return 0;
}

void reverse(char ch[], int len){
    char temp;
    int i=0;
    int j=len;
    while(i<j){
        temp = ch[i];
        ch[i] = ch[j-1];
        ch[j-1] = temp ;
        i++; j--;   
    }

}

void ch2int (char ch[], int in[]){

    for(int i=0; i<strlen(ch); i++){
        if(ch[i]==0) break;
        in[i] = ch[i]-'0';
    }
}

void minus(char ch1[], char ch2[]){
    int num1[101]={0}, num2[101]={0}; 
    int result[101]={0};
    
    ch2int(ch1, num1);
    ch2int(ch2, num2);

    if(compare(num1, num2)){  //num1比num2大
        int borrow=0; //borrow紀錄借位
        for(int i=0; i<101; i++){
            result[i] = num1[i]-num2[i]-borrow;
            if(result[i]<0){
                result[i]+=10;
                borrow=1;
            }
        else borrow=0;
        
        }

        int start=100;  //要開始列印的元素位置
        while(result[start]==0) start--;

        for(start; start>=0; start--){
            printf("%d", result[start]);
        }      
    }
    else{
        int borrow=0; //borrow紀錄借位
        for(int i=0; i<101; i++){
            result[i] = num2[i]-num1[i]-borrow;
            if(result[i]<0){
                result[i]+=10;

                borrow=1;
            }
        else borrow=0;
        }
        
        int start=100;  //要開始列印的元素位置
        while(result[start]==0) start--;
        
        printf("A - B = -");
        for(start; start>=0; start--){
            printf("%d", result[start]);
        }         

    }
   
}

bool compare(int in1[], int in2[]){
    int last1=99;
    int last2=99; //last紀錄最大位數

    for(int i=99; i>=0; i--){
        if(in1[i]==0) last1--;
        else break;
    }

    for(int i=99; i>=0; i--){
        if(in2[i]==0) last2--;
        else break;
    }

    //先比位數
    if(last1 > last2) return 1;
    else if(last1 < last2) return 0;

    //再從高位數比下去   
    else{    
        for(last1; last1>=0; last1--){
            if(in1[last1] < in2[last1]) return 0;
            else if(in1[last1] > in2[last1]) return 1;
        }
        
    }
}
