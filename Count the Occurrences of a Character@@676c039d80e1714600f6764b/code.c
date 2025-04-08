#include <stdio.h>
#include <string.h>
int countOccurrences(char *str, char target) {
    int count = 0;
    while (*str) {
        if (*str == target) {
            count++; 
        }
        str++;
    }
    return count;
}
int main() {
    char str[100];
    char target;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    scanf(" %c", &target);
    int occurrence = countOccurrences(str, target);
    printf("%d", occurrence);
    return 0;
}