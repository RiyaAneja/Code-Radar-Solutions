#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;i++){
        if(str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else str[i]=str[i]-32;
    }
    puts(str);
    return 0;
}