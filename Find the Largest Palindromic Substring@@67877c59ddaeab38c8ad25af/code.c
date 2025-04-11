#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int start = 0;
    int maxLength = 1; 
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            int isPalindrome = 1;
            for (int left = i, right = j; left < right; left++, right--) {
                if (str[left] != str[right]) {
                    isPalindrome = 0;
                    break; 
                }
            }
            if (isPalindrome) {
                int currentLength = j - i + 1; 
                if (currentLength > maxLength) {
                    start = i;
                    maxLength = currentLength; 
                }
            }
        }
    }
    for (int i = start; i < start + maxLength; i++) {
        printf("%c",str[i]); 
    }
    return 0;
}