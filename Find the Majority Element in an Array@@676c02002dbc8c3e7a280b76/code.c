#include<stdio.h>
int majority(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
    }
    return count;
}
int main(){
    int n,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maj=majority(arr[],n);
    if(maj>(n/2)){
        printf("%d",maj);
    }
    else printf("-1");
}