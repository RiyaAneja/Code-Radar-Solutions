#include <stdio.h>
#include <string.h>
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
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }
    str[strcspn(str, "\n")] = 0;
    printf("Enter character to replace: ");
    if (scanf(" %c", &toReplace) != 1) {
        fprintf(stderr, "Error reading character to replace.\n");
        return 1; 
    }
    printf("Enter replacement character: ");
    if (scanf(" %c", &replacement) != 1) {
        fprintf(stderr, "Error reading replacement character.\n");
        return 1; 
    }
    replaceCharacter(str, toReplace, replacement);
    printf("Modified string: %s\n", str);
    return 0; 
}