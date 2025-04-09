#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char ch;
    scanf("%c",&ch);
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==ch){
            count++;
        }
    }
         
    
    printf("%d",count);
    return 0;
}