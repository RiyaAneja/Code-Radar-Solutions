// #include<stdio.h>
// int main(){
//     int n,space;
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++){
//         for(int space =1;space<=n-i;space++){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){

//             printf("*");
//         }
        
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){

//             printf("*");
//         }
        
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}