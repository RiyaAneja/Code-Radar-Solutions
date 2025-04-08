#include <stdio.h>
void replaceCharacter(char *str, char toReplace, char replacement) {
    while (*str) {
        if (*str == toReplace) {
            *str = replacement;
        }
        str++;
    }
}
int main() {
    char str[100]; 
    char toReplace, replacement;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    scanf(" %c", &toReplace);
    scanf(" %c", &replacement);
    replaceCharacter(str, toReplace, replacement);
    printf("%s\n", str);
    return 0;
}