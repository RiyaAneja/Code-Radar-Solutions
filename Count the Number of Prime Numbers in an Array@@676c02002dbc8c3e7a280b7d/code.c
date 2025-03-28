#include<stdio.h>
int prime(int arr[],n){
    int prime=0;
    for(int i=0;i<n;i++){
        for(int j=2;j<=n;j++){
            if(arr[i]%2!=0){
                prime=1;
            }
            break;
        }
    }
    return i;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isprime=prime(arr[n],n);
    printf("%d",i);
    
    return 0;
}
