// #include <stdio.h>
// #include <string.h>

// int main() {
//     char ch[50];
//     fgets(ch, sizeof(ch), stdin);

//     int size = 0;
//     int k = 0;

//     // Calculate the size of the string
//     while (ch[k] != '\0' && ch[k] != '\n') { // Check for both null terminator and newline
//         size++;
//         k++;
//     }

//     // Reverse the string
//     for (int i = 0, j = size - 1; i < j; i++, j--) {
//         char temp = ch[i];
//         ch[i] = ch[j];
//         ch[j] = temp;
//     }

//     puts(ch); // Print the reversed string
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(int i=0,j=len-1;i<j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    return 0;
}