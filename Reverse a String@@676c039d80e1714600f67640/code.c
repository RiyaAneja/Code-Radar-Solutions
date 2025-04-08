#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    fgets(ch, sizeof(ch), stdin);

    int size=0;
    int k=0;
    while(ch[k] != '\0')
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
    
    puts(ch);
    return 0;
}