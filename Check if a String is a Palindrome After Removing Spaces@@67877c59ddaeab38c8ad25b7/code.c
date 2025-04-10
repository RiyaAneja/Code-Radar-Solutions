#include <stdio.h>
#include<string.h>
int main() {
    char str[100], result[100],str1[100];
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    int length=strlen(result);
    // char str1[100];
    strcpy(str1,result);
    for(int i=0,j=length-1;i<j;i++,j--){
        char temp=result[i];
        result[i]=result[j];
        result[j]=temp;
    }
    if(strcmp(str1,result)==0){
        printf("Yes");
    }
    else printf("No");
    return 0;
}
