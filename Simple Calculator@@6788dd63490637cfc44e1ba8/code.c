#include <stdio.h>
int main(){
    int a,b,r;
    char str[1];
    scanf("%d %d",&a,&b);
    scanf("%s",&str);
    if(str=='+'){
        r=a+b;        
    }
    else if(str=='-'){
        r=a-b;
    }
    else if(str=='*'){
        r=a*b;
    }
    else{
        r=a/b;
    }
    printf("%d",r);
    return 0;
}
