// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
        
//         for(int j=1;j<=i;j++){
//             int d=64+j;
//             printf("%c ",(char)d);
            
//         }
    
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i++){
        for(int j=1;j<=i;j++){
            int d=j+64;
            printf("%c",(char)d);
        }
        printf("\n");
    }
    return 0;
}

