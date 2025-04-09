#include<stdio.h>
#include<string.h>
int main(){
    int i,j=0;
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    while(str1[i]!='\0'){
    
        if(!(str1[i]==' ' && str1[i+1]==' ')){
            str2[j]=str1[i];
            j++;
        }
       i++;
    }
    str2[j]='\0';
    printf("%s",str2);
    return 0;
}