#include <stdio.h>
#include <string.h>

void replaceChar(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[] = "hello world";
    // printf("Original string: %s\n", str);

    replaceChar(str, 'o', 'a');
    printf("Modified string: %s\n", str);

    return 0;
}