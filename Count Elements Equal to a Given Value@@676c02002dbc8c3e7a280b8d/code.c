#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;i++){
            if(arr[i]+arr[j]==k){
                count+=1;
            }
        }
        printf("%d",count);
    }
    return 0;
}