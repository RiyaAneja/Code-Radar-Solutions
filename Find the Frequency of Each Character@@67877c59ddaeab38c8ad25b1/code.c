#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        int alreadyCounted = 0;
        for (int k = 0; k < i; k++) {
            if (str[i] == str[k]) {
                alreadyCounted = 1;
                break;
            }
        }
        if (alreadyCounted) {
            continue; 
        }
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        printf("%c: %d\n", str[i], count);
    }
    return 0;
}