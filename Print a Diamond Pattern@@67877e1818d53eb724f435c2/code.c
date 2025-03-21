#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
       
        for(int k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
       
        for(int k=n-1; k>i;k++){
            printf("*");
        }
        for(int a=n-2;a>i;a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}