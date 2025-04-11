#include <stdio.h>
#include <string.h>
void findShortestWord(char str[]) {
    int minLength = 1000, length = 0, start = 0, end = 0;
    char shortestWord[100];
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (length < minLength && length > 0) {
                minLength = length;
                strncpy(shortestWord, &str[start], length);
                shortestWord[length] = '\0';
            }
            length = 0; 
            start = i + 1; 
        } else {
            length++; 
        }
    }
    printf("%s\n", shortestWord);
}
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0'; 
    findShortestWord(str);
    return 0;
}