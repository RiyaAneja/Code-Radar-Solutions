#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int len=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(str1[i]<str1[j]){
                str1[i]=str1[j];
            }
        }
    }
    for(int i=0;i<len2;i++){
        for(int j=i+1;j<len2;j++){
            if(str2[i]<str2[j]){
                str2[i]=str2[j];
            }
        }
    }
    if(strcmp(str1,str2)=0){
        printf("Yes");
    }
    else printf("No");
    return 0;
}