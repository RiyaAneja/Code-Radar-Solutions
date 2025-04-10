#include<stdio.h>
#include<string.h>
int main(){
    char str;
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='A'||str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else str[i]=str[i]-32;
    }
    puts(str);
    return 0;
}