#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    fgets(ch, sizeof(ch), stdin);
    int size=0;
    int k=0;
    if(ch[k]!='\0'&&ch[k]!='\n'){
        size++;
        k++;
    }
    int vowels=0;
    for(int i=0;i<size;i++){
        
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            vowels++;
        }    
        printf("%d",vowels);    
    }
    // printf("%d",vowels);
    return 0;
}
