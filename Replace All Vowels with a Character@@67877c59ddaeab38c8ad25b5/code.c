#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char replace;
    scanf("%c",&replace);
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    for(int i=0;i<length;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i]=replace;
        }
    }
    puts(str);
    return 0;
}