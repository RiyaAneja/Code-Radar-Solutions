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
    
    for(int i=0;i<size;i++){
        int vowels=0;
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            vowels+=1;
        }    
        printf("%d",vowels);    
    }
    // printf("%d",vowels);
    return 0;
}
