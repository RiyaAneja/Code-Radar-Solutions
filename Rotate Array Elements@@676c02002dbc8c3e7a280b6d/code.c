#include<stdio.h>
void rev(int arr[], int a, int b){
    for(int i=a,j=b;i<b;i++,j--){
    
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
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
    
    rev(arr,0,k-1);
    rev(arr,k,n-1);
    rev(arr,0,n-1);
    
    for(int j=0;j<n;j++){
        printf("%d\n",arr[j]);
    }
    return 0;
}

    
    
