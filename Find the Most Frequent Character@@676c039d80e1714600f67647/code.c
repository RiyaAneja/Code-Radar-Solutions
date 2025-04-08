#include <stdio.h>
#include <string.h>
char findMostFrequentChar(char *str) {
    int freq[256] = {0}; 
    int maxFreq = 0;      
    char mostFrequentChar = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++; 
    }
    for (int i = 0; str[i] != '\0'; i++) {
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
    str[strcspn(str, "\n")] = '\0';
    char result = findMostFrequentChar(str);
    printf("%c", result);
    return 0;
}