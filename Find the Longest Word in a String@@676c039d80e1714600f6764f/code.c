#include <stdio.h>
#include <string.h>
int main() {
    char str[100], longest[100] = "", temp[100] = "";
    int maxLength = 0, len = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            temp[len] = '\0';
            if (len > maxLength) {
                maxLength = len;
                strcpy(longest, temp);
            }
            len = 0;
        } else {
            temp[len++] = str[i];
        }
    }
    printf("%s\n", longest);
    return 0;
}