#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j%2==0){
                if(i==j);
                    printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}