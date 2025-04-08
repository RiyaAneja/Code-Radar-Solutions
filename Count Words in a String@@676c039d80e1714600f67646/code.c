// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[50];
//     fgets(ch,sizeof(ch),stdin);
//     int size=strlen(ch);
//     int count=1;
//     for(int i=0;i<size;i++){
//         if(ch[i]==' '){
//             count+=1;
//         }        
//     }
//     printf("%d",count);
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];
    fgets(ch, sizeof(ch), stdin);
    
    int count = 0; // Initialize word count

    for (int i = 0; ch[i] != '\0'; i++) {
        // Check for the start of a word
        if (ch[i] != ' ' && (i == 0 || ch[i - 1] == ' ')) {
            count++; // Increment count when a new word starts
        }
    }

    printf("%d\n", count); // Print the word count
    return 0;
}
