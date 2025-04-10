#include <stdio.h>
int main() {
    char str[100];
    scanf("%99s", str); 
    for (int i = 0; str[i]; i++) {
        int count = 0;
        for (int j = 0; str[j]; j++) {
            if (str[j] == str[i]) count++;
        }
        if (count == 1) {
            printf("%c\n", str[i]);
            // return 0; 
        }
        else printf("-");
    }
    // printf("-"); 
    return 0;
}