#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++) { 
        for (int j = i; j < len; j++) {
            int isUnique = 1;
            for (int start = 0; start < i; start++) {
                if (strncmp(&str[start], &str[i], j - i + 1) == 0) {
                    isUnique = 0;
                    break;
                }
            }
            if (isUnique) count++;
        }
    }
    printf("%d\n", count);
    return 0;
}