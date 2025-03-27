#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int b=0;b<n;b++){
        scanf("%d",&arr[b]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                count+=1;
            }    
        }  
    }
    printf("%d",count); 
    return 0;
}