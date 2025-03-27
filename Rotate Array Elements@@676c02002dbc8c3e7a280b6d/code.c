// #include<stdio.h>
// void rev(int arr[], int a, int b){
//     for(int i=a,j=b;i<b;i++,j--){
//         int temp=arr[a];
//         arr[a]=arr[b];
//         arr[b]=temp;
//     }
//     return;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int k;
//     scanf("%d",&k);
//     k=k%n;
//     rev(arr,0,n);
//     rev(arr,0,k-1);
//     rev(arr,k,n);
    
//     for(int j=0;j<n;j++){
//         printf("%d\n",arr[j]);
//     }
//     return 0;
// }
#include<stdio.h>

void rev(int arr[], int a, int b){
    while (a < b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    k = k % n; // Ensures k is within bounds
    rev(arr, 0, k - 1); // Reverse first k elements
    rev(arr, k, n - 1); // Reverse the remaining elements
    rev(arr, 0, n - 1); // Reverse the entire array

    for(int j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }
    return 0;
}
    
    
