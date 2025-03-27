#include<stdio.h> 
int main(){ 
    int n,t; 
    scanf("%d",&n); 
    
    int arr[n]; 
    for(int b=0;b<n;b++){ 
        scanf("%d",&arr[b]); 
    } 
    scanf("%d",&t); 
    
    for(int i=0;i<n;i++){ 
        for(int j=i+1;j<n;j++){ 
            if(arr[i]+arr[j]==t){
                printf("%d %d\n",i,j);
                 
            }
        }
    }
    return 0;
}