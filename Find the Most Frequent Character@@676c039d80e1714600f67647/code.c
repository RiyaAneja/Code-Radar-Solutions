#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0}; 
    char mostFrequentChar = 0;
    int maxFreq = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentChar = (char)i;
        }
    }
    printf("%c\n", mostFrequentChar);
    return 0;
}