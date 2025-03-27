#include<stdio.h> 
int main(){ 
    int n,k; 
    scanf("%d",&n); 
    
    int arr[n]; 
    for(int b=0;b<n;b++){ 
        scanf("%d",&arr[b]); 
    } 
    scanf("%d",&k); 
    
    for(int i=0;i<n;i++){ 
        for(int j=i+1;j<n;j++){ 
            if(arr[i]+arr[j]==k){
                pritnf("%d %d",i,j);
                 
            }
        }
    }
    return 0;
}