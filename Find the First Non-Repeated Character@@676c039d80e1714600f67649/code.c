#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int found = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str) - 1; i++) {
        int count = 0;
        for (int j = 0; j < strlen(str) - 1; j++) {
            if (str[i] == str[j] && i != j) { 
                count++;
                break; 
            }
        }
        if (count == 0) {
            printf("%c\n", str[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("-");
    }
    return 0;
}