#include <stdio.h>
int main() {
    char str[100];
    int i, start = 0;
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            for (int end = i - 1; start < end; start++, end--) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
            }
            start = i + 1;
        }
    }
    printf("%s", str);
    return 0;
}