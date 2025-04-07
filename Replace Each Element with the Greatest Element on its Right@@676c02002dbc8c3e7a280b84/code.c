#include<stdio.h>
int greatestelement(arr[],n){
    for(int i=0;i<n;i++){
        // int max=arr[i];
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                arr[i++]=arr[j];                
            }
        }
        if(i==n){
            arr[n]=-1;
        }    
    }
    return arr[];
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    arr[n]=greatestelement(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}