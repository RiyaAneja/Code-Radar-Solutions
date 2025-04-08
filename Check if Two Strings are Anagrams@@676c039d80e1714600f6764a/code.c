#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void countFrequency(char *str, int *freq) {
    while (*str) {
        freq[(int)(*str)]++; 
        str++;
    }
}
bool areAnagrams(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return false;
    }
    int freq1[256] = {0};
    int freq2[256] = {0};
    countFrequency(str1, freq1);
    countFrequency(str2, freq2);
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    if (areAnagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}