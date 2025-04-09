#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    int count=0;
    for(int i=0;i<length;i++){
        if(str[i]!=' '&&(i==0||str[i-1]==' ')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}