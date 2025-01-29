#include <stdio.h>
int main(){
    int a,n;
    int p==0;
    scanf("%d",&a);
    for(n=2;n<a;n++){
        if(a%n==0){
            p==1;
        }
    }
    if(p==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}