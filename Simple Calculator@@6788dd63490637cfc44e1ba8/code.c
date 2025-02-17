#include <stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d",&a,&b);
    scanf(" %c", &op);
    switch(op){
        case '+':
            printf("%d",a+b);
            break; 
        case '-':
            if(a>b){
                 printf("%d",a-b);
            }
            else{
                printf("");
            }
            break;
        
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            if(b!=0){
                printf("%d",a/b);
            }
            else{
                printf("error");
            }
            break;
        default:
            printf(" ");  
    }
        return 0;
  
}