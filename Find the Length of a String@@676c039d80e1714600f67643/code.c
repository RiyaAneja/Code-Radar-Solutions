#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    fgets(ch,sizeof(ch),stdin);
    int size=strlen(ch);
    printf("%d",size);
}