#include<stdio.h>
int fibo(n){
    int a=0;
    int b=1;
    int sum=a+b;
    a=b;
    b=sum;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}