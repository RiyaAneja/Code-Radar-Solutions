#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    for(int i=0;i<strlen(str1);i++){
        for(int j=i+1;j<strlen(str1);j++){
            if(str1[i]>str1[j]){
                char temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    for(int i=0;i<strlen(str2);i++){
        for(int j=i+1;j<strlen(str2);j++){
                if(str2[i]>str2[j]){
                    char temp=str2[i];
                    str2[i]=str2[j];
                    str2[j]=temp;
                }
            }
    }
    if(strcmp(str1,str2)==0){
        printf("Yes");
    }
    else printf("No");
    return 0;
}