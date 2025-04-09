
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char ch[50];
//     fgets(ch, sizeof(ch), stdin);
    
//     int count = 0; // Initialize word count

//     for (int i = 0; ch[i] != '\0'; i++) {
//         // Check for the start of a word
//         if (ch[i] != ' ' && (i == 0 || ch[i - 1] == ' ')) {
//             count++; // Increment count when a new word starts
//         }
//     }

//     printf("%d\n", count); // Print the word count
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    itn count=0;
    for(int i=0;i<len;i++){
        if(str[i]!=' '&&(i==0||str[i-1]==' ')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}