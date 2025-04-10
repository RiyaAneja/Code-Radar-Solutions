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
    int foundBinaryDigit = 0; // Flag to indicate if a binary digit is found

    // Read a line of input
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;

    // Check for binary digits
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '0' || str[i] == '1') {
            foundBinaryDigit = 1; // Set flag if a binary digit is found
            break; // Exit the loop early
        }
    }

    // Output result based on the flag
    if (foundBinaryDigit) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}