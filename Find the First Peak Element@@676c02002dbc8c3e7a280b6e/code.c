// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int a=arr[0];
//     for(int j=1;j<n;j++){
//         if(a<arr[j]){
//             a=arr[j];  
//         }
        
        
         
//     }
  
//     printf("%d",a);
//     return 0;
// }
#include<stdio.h>

int main() {
    int n, largest;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0]; // Assume the first element is the largest
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i]; // Update if a larger element is found
        }
    }

    printf("%d", largest); // Print the largest element
    return 0;
}