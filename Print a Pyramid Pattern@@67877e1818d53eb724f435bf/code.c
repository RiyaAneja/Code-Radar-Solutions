// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         // for(int j=1;j<=n-i;j++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
       
//         for(int k=1;k<=(2*i)-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n); // Input the number of levels of the pyramid

//     for(int i = 1; i <= n; i++) {
//         // Print spaces before stars
//         for(int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // Print stars for the current level
//         for(int k = 1; k <= (2 * i - 1); k++) {
//             printf("*");
//         }

//         // Move to the next line after each level of the pyramid
//         printf("\n");
//     }
    
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i -1);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}















