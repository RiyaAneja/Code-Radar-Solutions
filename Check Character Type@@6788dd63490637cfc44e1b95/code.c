#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i' || ch=='I'|| ch=='o'|| ch=='O'||ch=='u' ||ch=='U'){
        printf("Vowel\n");
    }
    else if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z')){
        printf("Consonant\n");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit\n");
    }
    else{
        printf("Special Character");
    }WQ
    return 0;
}
