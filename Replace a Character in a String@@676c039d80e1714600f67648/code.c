#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char ch1, ch2;
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch1) {
            str[i] = ch2;
        }
    }
    puts(str);
    return 0;
}
