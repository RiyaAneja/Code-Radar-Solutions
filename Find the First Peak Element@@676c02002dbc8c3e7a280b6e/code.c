// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int a=-1;
//     for(int j=0;j<n;j++){
//         if(a<arr[j]){
//             a=arr[j];  
//         }
//         break;
//     }
//     printf("%d",a);
//     return 0;
// }
#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n); 
    int arr[n]; 
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]); 
    } 
    int a=-1; 
    for(int j=0;j<n;j++){ 
        if(a<arr[j]){ 
            a=arr[j];
        } 
        break; 
    } 
    printf("%d",a); 
    return 0; 
} 
         
//     }
  
//     printf("%d",a);
//     return 0;
// }
// #include<stdio.h>

// int main() {
//     int n, largest;
//     scanf("%d", &n);

//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     largest = arr[0]; // Assume the first element is the largest
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > largest) {
//             largest = arr[i]; // Update if a larger element is found
//         }
//     }

//     printf("%d", largest); // Print the largest element
//     return 0;
// }
// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Iterate to find the first peak element
//     for(int i = 0; i < n; i++) {
//         if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
//             // Check if the element is greater than its neighbors
//             printf("%d", arr[i]); // Print the peak element
//             break; // Exit after finding the first peak
//         }
//     }

//     return 0;
// }