#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000
int main() {
    char str[MAX_LENGTH];
    char longestWord[MAX_LENGTH] = "";
    char currentWord[MAX_LENGTH] = "";
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentWord[strlen(currentWord)] = str[i];
            currentWord[strlen(currentWord) + 1] = '\0'; 
        } else {
            if (strlen(currentWord) > strlen(longestWord)) {
                strcpy(longestWord, currentWord);
            }
            currentWord[0] = '\0';
        }
        if (str[i] == '\0') {
            break;
        }
    }
    if (strlen(currentWord) > strlen(longestWord)) {
        strcpy(longestWord, currentWord);
    }
    printf("%s\n", longestWord);
    return 0;
}