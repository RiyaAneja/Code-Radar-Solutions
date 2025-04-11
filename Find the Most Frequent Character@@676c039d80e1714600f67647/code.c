// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100], sttr[100];
//     fgets(str, sizeof(str), stdin);
//     int length = strlen(str);
//     char max;
//     strcpy(sttr, str);
//     for(int i = 0; i < length; i++){
//         for(int j = i + 1; j < length; j++){
//             if(sttr[i] > sttr[j]){
//                 char temp = sttr[i];
//                 sttr[i] = sttr[j];
//                 sttr[j] = temp;
//             }
//         }
//     }
//     int maxcount = 0;
//     for(int i = 0; i < length; i++){
//         int count = 0;
//         for(int j = 0; j < length; j++){
//             if(str[i] == str[j]){
//                 count++;
//             }
//         }
//         if((count > maxcount) || (count == maxcount && str[i] < max)){
//             maxcount = count;
//             max = str[i];
//         }
//     }
//     printf("%c", max);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int maxCount = 0;
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0'; 
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++; 
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }
    printf("%c\n", maxChar);
    return 0;
}