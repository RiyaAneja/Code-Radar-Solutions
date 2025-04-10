#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str);stdin);
    for(int i=0;i<strlen(str);i++){
        int count=0;
        for(int j=i+1;j<strlen(str);j++){
            if(str[i]!=str[j]){
                count++;
            }
        }
        if(count!=0){
            printf("%d",str[i]);
        }
        else printf("-");
    }
    return 0;
}