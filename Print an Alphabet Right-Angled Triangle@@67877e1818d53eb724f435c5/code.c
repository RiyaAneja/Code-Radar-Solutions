#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            int d=64+j;
            printf("%c ",(char)d);
            
        }
    
        printf("\n");
    }
    return 0;
}
 