#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\n'; i++) { 
        int repeated = 0;
        for (int j = 0; str[j] != '\n'; j++) {
            if (str[i] == str[j] && i != j) {
                repeated = 1;
                break;
            }
        }
        if (!repeated) { 
            printf("%c\n", str[i]);
            return 0;
        }
    }
    printf("-");
    return 0;
}