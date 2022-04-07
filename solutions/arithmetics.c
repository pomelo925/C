#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//大數相加
void reverse(char ch[], int len); //翻轉陣列
void ch2int (char ch[], int in[]); //char陣列轉int陣列
void plus(char ch1[], char ch2[]); //印出相加
void minus(char ch1[], char ch2[]); //印出相減
void multiple(char ch1[], char ch2[]); //印出相乘
bool compare(int in1[], int in2[]);  //比較兩陣列

char numA[100]={'0'}, numB[100]={'0'};  //先給定一個足夠大的陣列，但用malloc會更好

int main(){
    char arith;

    printf("number A: ");
    gets(numA);
    printf("number B: ");
    gets(numB);
    printf("select arithmetic(+ - * / ):\t");
    scanf("%c", &arith);

    switch(arith){
        case '+':
            plus(numA, numB); 
            break;
        case '-':
            minus(numA, numB); 
            break;
        case '*':  
            multiple(numA, numB); 
            break;
        case '/':
            break;
    }
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
        in[i] = ch[i]-'0';
    }
}

void plus(char ch1[], char ch2[]){
    reverse(ch1, strlen(ch1));
    reverse(ch2, strlen(ch2));

    int num1[101]={0}, num2[101]={0}; 
    int result[101]={0}; 
    
    ch2int(ch1, num1);
    ch2int(ch2, num2);

    int carry=0; //carry紀錄進位
    for(int i=0; i<101; i++){
        result[i] = num1[i]+num2[i]+carry;
        carry = result[i]/10;
        result[i] %= 10;
    }

    int start=100;  //要開始列印的元素位置
    while(result[start]==0){
        start--;
    }

    printf("A + B = ");
    for(start; start>=0; start--){
        printf("%d", result[start]);
    }   
}

void multiple(char ch1[], char ch2[]){
    reverse(numA, strlen(numA));
    reverse(numB, strlen(numB)); 

    int num1[100]={0}, num2[100]={0}; 
    int result[10000]={0}; 
    
    ch2int(ch1, num1);
    ch2int(ch2, num2);

    for(int i=0; i<50; i++){   
        if(num1[i] == 0) continue;
        for(int j=0; j<50; j++){
            result[i+j] += num1[i]*num2[j];
        }
    }

    int carry=0; //carry記錄進位
    for(int i=0; i<10000; i++){
        result[i] += carry;
        carry = result[i]/10;
        result[i] %= 10;
    }

    int start=9999;  //start紀錄開始列印的元素
    printf("A x B = ");
    while(result[start]==0) start--;
    if(start == -1) printf("0");
    for(start; start>=0; start--){
        printf("%d", result[start]); 
    }
}                           

void minus(char ch1[], char ch2[]){
    reverse(numA, strlen(numA));
    reverse(numB, strlen(numB));

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

        printf("A - B = ");
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
    int last=99;

    while(1){
        if(in1[last] > in2[last]) return 1;
        else if(in1[last] < in2[last]) return 0;
        last--;
    }
}