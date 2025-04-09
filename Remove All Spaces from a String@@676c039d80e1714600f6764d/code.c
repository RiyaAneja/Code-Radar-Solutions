#include<stdio.h>
#include<string.h>
int main(){
    int j=0;
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    for(int i=0;i<strlen(str1);i++){
        if(!(str1[i]==' '&& str1[i+1]==' ')){
            str2[j]=str1[i];
            j++;
        }
       
    }
    str2[j]='\0';
    printf("%s",str2);
    return 0;
}