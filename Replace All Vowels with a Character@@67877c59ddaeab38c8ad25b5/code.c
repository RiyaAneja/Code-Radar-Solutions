#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]='a'||str[i]='e'||str[i]='i'||str[i]='o'||str[i]='u'){
            str[i]='*';
        }
    }
    puts(str);
    return 0;
}