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
    replaceChar(str, 'o', 'a');
    printf("%s\n", str);
    return 0;
}