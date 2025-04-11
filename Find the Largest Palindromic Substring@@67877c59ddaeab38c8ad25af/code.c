#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int len = strlen(str);
    int start = 0; // Starting index of the longest palindrome
    int maxLength = 1; // Length of the longest palindrome

    // Check all substrings
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            // Assume it's a palindrome
            int isPalindrome = 1;
            // Check if the substring str[i..j] is a palindrome
            for (int left = i, right = j; left < right; left++, right--) {
                if (str[left] != str[right]) {
                    isPalindrome = 0; // Not a palindrome
                    break; // Exit the loop early
                }
            }
            // If it's a palindrome and longer than the previous longest
            if (isPalindrome) {
                int currentLength = j - i + 1; // Length of the current palindrome
                if (currentLength > maxLength) {
                    start = i; // Update starting index
                    maxLength = currentLength; // Update max length
                }
            }
        }
    }

    // Print the longest palindromic substring
    printf("Longest palindromic substring: ");
    for (int i = start; i < start + maxLength; i++) {
        putchar(str[i]); // Print each character
    }
    putchar('\n'); // New line

    return 0;
}