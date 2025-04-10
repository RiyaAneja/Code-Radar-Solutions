#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        printf("No\n");
        return 0;
    }
    for (int i = 0; i < len1 - 1; i++) {
        for (int j = i + 1; j < len1; j++) {
            if (str1[i] > str1[j]) {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    for (int i = 0; i < len2 - 1; i++) {
        for (int j = i + 1; j < len2; j++) {
            if (str2[i] > str2[j]) {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    if (strcmp(str1, str2) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}