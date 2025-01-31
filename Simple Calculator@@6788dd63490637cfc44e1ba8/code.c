#include <stdio.h>
int main(){
    int a,b,r;
    char str[2];
    scanf("%d %d",&a,&b);
    scanf("%s",&str);
    switch(str){
        case '+':
            printf("%d",a+b);
            break;
        
        case '-':
            printf("%d",a-b);
            break;
        
        case '*':
            printf("%d",a*b);
        
        default:
            printf("%d",a/b);
            
        
    }
        return 0;
  
}