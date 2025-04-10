// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     char replace;
//     fgets(str,sizeof(str),stdin);
//     scanf("%c",&replace);
//     int length=strlen(str);
//     for(int i=0;i<length;i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
//             str[i]=replace;
//         }
//     }
//     puts(str);
//     return 0;
// }
#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    char replace;

    // Reading the string input
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Removing the newline character

    // Reading the replacement character
    scanf("%c", &replace);

    int length = strlen(str);

    // Loop to replace vowels with the replacement character
    for(int i = 0; i < length; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = replace;
        }
    }

    // Output the modified string
    puts(str);

    return 0;
}