#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    gets(ch,sizeof(ch),stdin);
    int size=strlen(ch);
    int count=1;
    for(int i=0,i<size;i++){
        if(str[i]==" "){
            count+=1;
        }
        printf("%d",count);
    }
    return 0;
}