#include<stdio.h>
void rev(int arr[], int a, int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%n;
    rev(0,k-1);
    rev(k,n);
    for(int j=0;j<n;j++){
        printf("%d",arr[i]);
    }
    
    
}