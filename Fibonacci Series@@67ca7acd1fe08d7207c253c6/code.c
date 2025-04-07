// #include<stdio.h>
// int fibo(int n){
//     int a=0;
//     int b=1;
//     int sum=a+b;
//     a=b;
//     b=sum;
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int fibonacci=fibo(n);
//     printf("%d",fibonacci);
//     return 0;
// }
#include <stdio.h>

int fibo(int n) {
    if (n == 0) return 0; // Base case 1
    if (n == 1) return 1; // Base case 2
    return fibo(n-1) + fibo(n-2); // Recursive case
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fibonacci = fibo(n);
    printf("The %dth Fibonacci number is %d\n", n, fibonacci);
    return 0;
}