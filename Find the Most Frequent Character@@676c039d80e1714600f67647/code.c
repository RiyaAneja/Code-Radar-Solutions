#include <stdio.h>
#include <string.h>

char findMostFrequentChar(char *str) {
    int freq[256] = {0}; // Array to store frequency of characters, assuming ASCII set
    int maxFreq = 0;      // Variable to store the maximum frequency
    char mostFrequentChar = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++; // Increment frequency of the character
        if (freq[(int)str[i]] > maxFreq) {
            maxFreq = freq[(int)str[i]];
            mostFrequentChar = str[i];
        }
    }

    return mostFrequentChar;
}

int main() {
    char str[100];

    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    char result = findMostFrequentChar(str);
    printf("%c\n", result);

    return 0;
}