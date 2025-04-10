#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i]=str[i]-32;
        }
    }
    puts(str);
    return 0;
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     fgets(str, sizeof(str), stdin);
    
//     for (int i = 0; i < strlen(str); i++) {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             // Convert uppercase to lowercase
//             str[i] = str[i] + 32;
//         } else if (str[i] >= 'a' && str[i] <= 'z') {
//             // Convert lowercase to uppercase
//             str[i] = str[i] - 32;
//         }
//     }
    
//     puts(str);
//     return 0;
// }