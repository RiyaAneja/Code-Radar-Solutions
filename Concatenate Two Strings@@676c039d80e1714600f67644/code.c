#include<stdio.h>
#include<string.h>

int main() {
    char ch[50];
    char ch1[50];
    fgets(ch, sizeof(ch), stdin);
    fgets(ch1, sizeof(ch1), stdin);
    ch[strcspn(ch, "\n")] = 0;
    ch1[strcspn(ch1, "\n")] = 0;
    strcat(ch, ch1);
    puts(ch);
    return 0;
}