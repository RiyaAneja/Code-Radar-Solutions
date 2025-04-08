#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    fgets(ch,sizeof(ch),stdin);
    char copy[50];
    strcpy(char *copy,char *ch);
    int k=0;
    int size=strlen(ch);
    for(int i=0, j= size-1;i<j;i++,j--){
        char temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
    }
    
     if (strcmp(copy, ch) == 0) {
        printf("YES\n"); // The string is a palindrome
    } else {
        printf("NO\n"); // The string is not a palindrome
    }
    return 0;
}
    