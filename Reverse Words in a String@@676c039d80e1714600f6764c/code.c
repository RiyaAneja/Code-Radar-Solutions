#include <stdio.h>
#include <string.h>
int main() {
    char str[100];    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int start = 0, end = 0;
    while (1) {
        while (str[end] != ' ' && str[end] != '\0') {
            end++;
        }
        for (int i = 0; i < (end - start) / 2; i++) {
            char temp = str[start + i];
            str[start + i] = str[end - 1 - i];
            str[end - 1 - i] = temp;
        }
        if (str[end] == '\0') break;
        start = end + 1;
        end = start;
    }
    printf("Reversed String: %s\n", str);
    return 0;
}