#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    gets(ch);
    int size=0;
    int k=0;
    while(str[k]!='\o'){
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        int temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
    }
    puts(ch);
}