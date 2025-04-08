#include<stdio.h>
#include<string.h>

int main() {
    char ch[50];
    char ch1[50];

    // Read input strings
    fgets(ch, sizeof(ch), stdin);
    fgets(ch1, sizeof(ch1), stdin);

    // Remove newline characters from each string
    ch[strcspn(ch, "\n")] = 0;
    ch1[strcspn(ch1, "\n")] = 0;

    // Concatenate the strings
    strcat(ch, ch1);

    // Print the combined string
    puts(ch);

    return 0;
}