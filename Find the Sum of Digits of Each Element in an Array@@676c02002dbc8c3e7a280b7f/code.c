#include<stdio.h>
void sum(int arr[],int n){
    for(int i=0;i<n;i++){
        int a;
        while(a>0){
            int a=arr[i]%10;
            arr[i]=arr[i]/10;
        }
        return;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int sum1=sum(arr[i],n);
    }
    printf("%d",&sum1);
    return 0;
}