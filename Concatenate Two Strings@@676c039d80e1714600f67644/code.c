#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    char ch1[50];
    fgets(ch,sizeof(ch),stdin);
    fgets(ch1,sizeof(ch1),stdin);
    strcat(ch,ch1);
    puts(ch);
    return 0;
}