// #include<stdio.h>
// int main(){
//     int n,k;
//     scanf("%d",&n);
//     scanf("%d",&k);
//     int arr[n];
//     for(int b=0;b<n;b++){
//         scanf("%d",&arr[b]);
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 count+=1;
//             }  
            
//         } 
//     printf("%d",count); 
//     }
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n); // Read the number of elements
    scanf("%d", &k); // Read the value to compare against
    
    int arr[n];
    for (int b = 0; b < n; b++) {
        scanf("%d", &arr[b]); // Read the elements of the array
    }
    
    int count = 0; // Initialize count to 0
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) { // Check if the current element is equal to k
            count += 1; // Increment count if it is
        }
    }
    
    // Print the count of elements equal to k
    printf("%d\n", count);
    
    return 0;
}