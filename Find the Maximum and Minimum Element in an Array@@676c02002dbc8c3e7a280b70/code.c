#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int j=1;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }
    for(int k=1;k<n;k++){
        if(min>arr[k]){
            min=arr[k];
        }
    }
    printf("%d %d",min,max);
    return 0;
}