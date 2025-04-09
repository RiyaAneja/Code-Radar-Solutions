#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    char str1[50];
    strcpy(str1,str);
    for(int i=0,j=length-1;i<j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    if(strcmp(str1,str)==0){
        printf("Yes");
    }
    else printf("No");
    return 0;
}