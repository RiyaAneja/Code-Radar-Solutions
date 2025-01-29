#include <stdio.h>
int main(){
    int v,c;
    scanf("%d %d",&v,&c);
    if((v>=18)&&(c==1)){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}