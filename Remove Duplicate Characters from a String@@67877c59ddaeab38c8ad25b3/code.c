#include <stdio.h>
#include <string.h>
int main() {
    char str[200], result[200];
    int seen[256] = {0}; 
    int index = 0;
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (seen[(unsigned char)str[i]] == 0) {
            result[index++] = str[i]; 
            seen[(unsigned char)str[i]] = 1; 
        }
    }
    result[index] = '\0'; 
    printf("%s\n", result);
    return 0;
}