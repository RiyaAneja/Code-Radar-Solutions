#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    int start = 0;
    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (int j = start, k = i - 1; j < k; j++, k--) {
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
            start = i + 1; 
        }
    }
    printf("%s\n", str);
    return 0;
}