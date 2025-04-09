#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    int i, start = 0, end = 0;

    

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i + 1] == '\0') {
            if (str[i + 1] == '\0') {
                end = i; // Handle last word
            } else {
                end = i - 1;
            }

            // Reverse the word between start and end
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1; // Move to the next word
        }
    }

    printf("%s\n", str);
    return 0;
}