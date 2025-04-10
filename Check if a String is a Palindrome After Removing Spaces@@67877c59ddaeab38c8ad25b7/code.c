// #include <stdio.h>
// #include<string.h>
// int main() {
//     char str[100], result[100],str1[100];
//     int i, j = 0;
//     fgets(str, sizeof(str), stdin);
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] != ' ') {
//             result[j++] = str[i];
//         }
//     }
//     result[j] = '\0';
//     int length=strlen(result);
//     strcpy(str1,result);
//     for(int i=0,j=length-1;i<j;i++,j--){
//         char temp=result[i];
//         result[i]=result[j];
//         result[j]=temp;
//     }
//     if(strcmp(str1,result)==0){
//         printf("Yes");
//     }
//     else printf("No");
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100], str1[100];
    int i, j = 0;

    // Input a string
    fgets(str, sizeof(str), stdin);

    // Remove spaces and store in 'result'
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') { // Also remove newline character
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    // Copy the 'result' string to 'str1' for palindrome checking
    strcpy(str1, result);

    // Reverse the 'result' string
    int length = strlen(result);
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }

    // Compare original and reversed strings
    if (strcmp(str1, result) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}