// #include<stdio.h>
// #include<string.h>

// int main() {
//     char ch[50];
//     char ch1[50];
//     fgets(ch, sizeof(ch), stdin);
//     fgets(ch1, sizeof(ch1), stdin);
//     ch[strcspn(ch, "\n")] = 0;
//     ch1[strcspn(ch1, "\n")] = 0;
//     strcat(ch, ch1);
//     puts(ch);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int length=strlen(str2);
    int len=strlen(str1);
    for(int i=0;i<length;i++){
        str1[(len-1)+i]=str2[i];
    }
    printf("%s",str1);
    return 0;
}
