#include<stdio.h>
void rev(int arr[], int a, int b) {
    while (a < b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
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
    if(k>n){
        k=k%n;
    }

    
    rev(arr,0,k-1);
    rev(arr,k,n-1);
    rev(arr,0,n-1);
    
    for(int j=0;j<n;j++){
        printf("%d\n",arr[j]);
    }
    return 0;
}

    
    
