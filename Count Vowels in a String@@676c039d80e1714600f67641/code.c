#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    fgets(ch, sizeof(ch), stdin);
    int vowels = 0;
    int length = strlen(ch); 
    for (int i = 0; i < length; i++) {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' ||
            ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') {
            vowels++;
        }
    }

    printf("%d", vowels); // Print the total count of vowels

    return 0;
}
