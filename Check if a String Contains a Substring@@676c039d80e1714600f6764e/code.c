#include<stdio.h>
#include<string.h>
int main(){
    char str[100], sbstr[100];
    int j;
    fgets(str,sizeof(str),stdin);
    fgets(sbstr,sizeof(sbstr),stdin);
    int a=strlen(str);
    int b= strlen(sbstr);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(str[i+j]!=sbstr[j]){
                break;
            }
        }
        if(j==b) printf("Yes");
        else printf("No");
    }
    return 0;
}