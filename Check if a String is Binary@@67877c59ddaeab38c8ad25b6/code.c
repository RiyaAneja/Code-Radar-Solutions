// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[100];
//     int bin = 0;
//     fgets(str, sizeof(str), stdin);
//     for(int i = 0; i < strlen(str); i++) {
//         if(str[i] == '0' || str[i] == '1') {
//             bin=1;
//             break; 
//         }
//     }
//     if(bin == 1) 
//         printf("Yes");
//     else 
//         printf("No");
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '0' || str[i] == '1') {
            printf("Yes\n");
            return 0; // Exit immediately upon finding a binary digit
        }
    }
    
    printf("No\n");
    return 0;
}