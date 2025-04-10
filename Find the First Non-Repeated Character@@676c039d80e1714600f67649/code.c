#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    for (int i = 0; str[i]!='\0'; i++) {
        int count = 0;
        for (int j = 0; str[j]!='\0'; j++) {
            if (str[j] == str[i]) count++;
        }
        if (count == 1) {
            printf("%c\n", str[i]);
            return 0; 
        }   
    }
    printf("-"); 
    return 0;
}