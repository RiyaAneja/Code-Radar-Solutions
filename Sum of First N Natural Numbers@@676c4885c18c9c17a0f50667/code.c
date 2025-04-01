// #include <stdio.h>
// int main(){
//     int a,sum=0;
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         sum=sum+i;
//     }
//     printf("%d",sum);
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}