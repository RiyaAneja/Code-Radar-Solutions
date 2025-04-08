// Your code here...#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Frequency array for ASCII characters
    char mostFrequentChar = 0;
    int maxFreq = 0;

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Count character frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the most frequent character
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentChar = (char)i;
        }
    }

    // Print the result
    printf("%c\n", mostFrequentChar);
    return 0;
}