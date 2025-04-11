#include <stdio.h>
#include <string.h>
int main() {
    char str[100];    
    scanf("%s", str);
    int len = strlen(str);
    int start = 0, maxLength = 1;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            int isPalindrome = 1;
            for (int k = 0; k <= (j - i) / 2; k++) {
                if (str[i + k] != str[j - k]) {
                    isPalindrome = 0;
                    break;
                }
            }
            if (isPalindrome && (j - i + 1) > maxLength) {
                maxLength = j - i + 1;
                start = i;
            }
        }
    }
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}