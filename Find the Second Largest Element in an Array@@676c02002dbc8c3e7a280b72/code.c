#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=arr[0];
    for(int j=0;j<n;j++){
        if(max<arr[j]){
            smax=max;
            max=arr[j];
        }
    }
      
    
    printf("%d",smax);
    return 0;
}