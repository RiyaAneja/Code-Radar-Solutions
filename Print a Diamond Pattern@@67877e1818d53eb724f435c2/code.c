// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
       
//         for(int k=1;k<=(2*i)-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf(" ");
//         }
       
//         for(int k=n-1; k>i;k--){
//             printf("*");
//         }
//         for(int a=n;a>i;a--){
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
//     for(int r=1;r<=n;r++){
//         for(int j=1;j<=n-r;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=(2*r-1);k++){
//             printf("*");
//         }
        
//         printf("\n");
//     }
//     for(int a=n-1;a>=1;a--){
//         for(int j=1;j<=n-a;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=(2*a-1);k++){
//             printf("*");
//         }
        
//         printf("\n");

//     }
//     return 0;
// }
















#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int a=n-1;a>=1;a--){
        for(int j=1;j<=n-a;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*a-1);k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}



