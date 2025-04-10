#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    char shortest[1000] = "";
    char currentWord[1000];
    int currentLength = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentWord[currentLength++] = str[i]; 
        } else {
            if (currentLength > strlen(shortest)) {
                currentWord[currentLength] = '\0'; 
                strcpy(shortest, currentWord); 
            }
            currentLength = 0; 
        }
        if (str[i] == '\0') {
            break;
        }
    }
    printf("%s\n", shortest);
    return 0;
}