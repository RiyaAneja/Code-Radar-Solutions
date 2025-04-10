#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        printf("%c: %d",str[i],count);
    }
    return 0;
}