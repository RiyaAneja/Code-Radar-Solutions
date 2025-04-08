#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Array to store frequency of characters (ASCII size)
    int maxFreq = 0;
    char mostFrequentChar;

    // Read the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the character with the maximum frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentChar = (char)i;
        }
    }

    // Print the result
    printf("'%c'", mostFrequentChar);

    return 0;
}