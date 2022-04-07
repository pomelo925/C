#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//大數相加
void reverse(char ch[], int len); //翻轉陣列
void ch2int (char ch[], int in[]); //char陣列轉int陣列
void plus(char ch1[], char ch2[]); //印出相加結果


int main(){
    char numA[100]={'0'}, numB[100]={'0'};  //先給定一個足夠大的陣列，但用malloc會更好
    char arith;

    printf("number A: ");
    gets(numA);
    printf("number B: ");
    gets(numB);
  
    reverse(numA, strlen(numA));
    reverse(numB, strlen(numB));

    plus(numA, numB);

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

void plus(char ch1[], char ch2[]){
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

    for(start; start>=0; start--){
        printf("%d", result[start]);
    }   
}
