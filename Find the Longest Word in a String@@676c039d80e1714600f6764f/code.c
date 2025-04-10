#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Directly using the size without #define
    char longestWord[1000] = "";
    char currentWord[1000];
    int currentLength = 0;

    // printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character from the string if present
    str[strcspn(str, "\n")] = 0;

    // Iterate through each character in the string
    for (int i = 0; ; i++) {
        // If the character is not a space and not the end of the string
        if (str[i] != ' ' && str[i] != '\0') {
            currentWord[currentLength++] = str[i]; // Add character to current word
        } else {
            // If we hit a space or end of string, check the current word
            if (currentLength > strlen(longestWord)) {
                currentWord[currentLength] = '\0'; // Null-terminate the current word
                strcpy(longestWord, currentWord); // Update longest word
            }
            currentLength = 0; // Reset current length for the next word
        }
        
        // Break the loop if we reach the end of the string
        if (str[i] == '\0') {
            break;
        }
    }

    // Final check in case the longest word is at the end of the string
    if (currentLength > strlen(longestWord)) {
        currentWord[currentLength] = '\0'; // Null-terminate the current word
        strcpy(longestWord, currentWord); // Update longest word
    }
    printf("%s\n", longestWord);
    return 0;
}