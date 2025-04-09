// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main() {
//     char str[1000];
//     int count[26] = {0}; 
//     int maxFreq = 0;
//     char result = '\0';
//     fgets(str, sizeof(str), stdin);
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (isalpha(str[i])) { 
//             char ch = tolower(str[i]); 
//             count[ch - 'a']++; 
//             if (count[ch - 'a'] > maxFreq || 
//                 (count[ch - 'a'] == maxFreq && (result == '\0' || ch < result))) {
//                 maxFreq = count[ch - 'a'];
//                 result = ch;
//             }
//         }
//     }
//     if (result != '\0') {
//         printf("%c\n", result);
//     } 
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],sttr[100];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    char max;
    strcpy(sttr,str);
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(sttr[i]>sttr[j]){
                char temp=sttr[i];
                sttr[i]=sttr[j];
                sttr[j]=temp;
            }
        }
    }
    int maxcount;
    for(int i=0;i<length;i++){
        int count=0;
        for(int j=0;j<length;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(maxcount<count){
            maxcount=count;
            max=str[i];
            
        }
        else{
            max=sttr[j];
            
                    }
        
    }
    printf("%c",max);
    return 0;    
}