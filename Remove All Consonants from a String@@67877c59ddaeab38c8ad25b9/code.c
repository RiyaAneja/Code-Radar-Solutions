#include <stdio.h>
#include<string.h>
int main() {
    char str[100], result[100];
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i]>'A'&&str[i]<'Z')) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}