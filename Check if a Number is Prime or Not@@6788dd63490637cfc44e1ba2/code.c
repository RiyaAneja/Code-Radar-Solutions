#include <stdio.h>
int main(){
    int a,n,p=0;
    scanf("%d",&a);
    for(n=2;n<a;i++){
        if(a%n==0){
            p==1;
        }
    }
    if(a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}