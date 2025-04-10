// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     char alpha[26]='abcdefghijklmnopqrstuvwxyz';
//     fgets(str,sizeof(str),stdin);
//     int length=strlen(str);
//     for(int i=0;i<length;i++){
//         str[i]=str[i]+32;
//     }
//     for(int j=0;j<length;j++){
//         int count=0;
//         if(str[j]=alpha[26]){
//             count+=1;
//         }
//         }
        
//     }
        
#include <stdio.h>

int main() {
    char str[100];
    int alpha[26] = {0}; // Tracking letters
    int count = 0;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    // Track letters without ctype
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if the character is a letter
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert uppercase to lowercase manually
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A'); // Offset to convert uppercase to lowercase
            }
            
            int index = ch - 'a'; // Map 'a' to 0, 'b' to 1, ...
            if (alpha[index] == 0) { // Count each letter once
                alpha[index] = 1;
                count++;
            }
        }
    }

    // Check if all 26 letters are present
    if (count == 26) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is NOT a pangram.\n");
    }

    return 0;
}