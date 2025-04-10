#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    // scanf("%99s", str); 
    fgets(str,sizeof(str),stdin);
    for (int i = 0; strlen(str); i++) {
        int count = 0;
        for (int j = 0; strlen(str); j++) {
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