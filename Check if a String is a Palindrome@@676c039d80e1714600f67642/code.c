// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[50];
//     fgets(ch,sizeof(ch),stdin);
//     char copy[50];
//     strcpy(copy, ch);
//     int k=0;
//     int size=strlen(ch);
//     for(int i=0, j= size-1;i<j;i++,j--){
//         char temp=ch[i];
//         ch[i]=ch[j];
//         ch[j]=temp;
//     }
    
//      if (strcmp(copy, ch) == 0) {
//         printf("Yes\n"); // The string is a palindrome
//     } else {
//         printf("No\n"); // The string is not a palindrome
//     }
//     return 0;
// }
    
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    char str1[50];
    strcpy(str1,str);
    for(int i=0,j=len-1;i<j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    if(strcmp(str1,str)==0){
        printf("Yes");
    }
    else printf("No");
    return 0;
}