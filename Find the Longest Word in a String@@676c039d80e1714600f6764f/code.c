#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    char longestWord[1000] = "";
    char currentWord[1000];
    int currentLength = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentWord[currentLength++] = str[i]; 
        } else {
            if (currentLength > strlen(longestWord)) {
                currentWord[currentLength] = '\0'; 
                strcpy(longestWord, currentWord); 
            }
            currentLength = 0; 
        }
        if (str[i] == '\0') {
            break;
        }
    }
    if (currentLength > strlen(longestWord)) {
        currentWord[currentLength] = '\0'; 
        strcpy(longestWord, currentWord); 
    }
    printf("%s\n", longestWord);
    return 0;
}