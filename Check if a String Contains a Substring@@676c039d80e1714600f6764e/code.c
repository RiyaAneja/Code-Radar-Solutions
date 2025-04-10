#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sbstr[100];
    int a, b, i, j, found = 0;

    fgets(str, sizeof(str), stdin);
    fgets(sbstr, sizeof(sbstr), stdin);

    a = strlen(str);
    b = strlen(sbstr);
    sbstr[b - 1] = '\0'; // Remove newline from sbstr

    for (i = 0; i <= a - b; i++) {
        for (j = 0; j < b; j++) {
            if (str[i + j] != sbstr[j]) {
                break;
            }
        }
        if (j == b) {
            found = 1; // Substring found
            break;
        }
    }

    if (found)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}