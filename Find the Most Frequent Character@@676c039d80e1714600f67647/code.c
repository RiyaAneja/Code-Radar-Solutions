#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count[26] = {0}; // Array to count frequency of each letter (a-z)
    int maxFreq = 0;
    char result = '\0';

    // Read input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { // Check if the character is alphabetic
            char ch = tolower(str[i]); // Convert to lowercase
            count[ch - 'a']++; // Increment the count for this character

            // Update max frequency and result character
            if (count[ch - 'a'] > maxFreq || 
                (count[ch - 'a'] == maxFreq && (result == '\0' || ch < result))) {
                maxFreq = count[ch - 'a'];
                result = ch;
            }
        }
    }

    if (result != '\0') {
        printf("%c\n", result);
    } 

    return 0;
}