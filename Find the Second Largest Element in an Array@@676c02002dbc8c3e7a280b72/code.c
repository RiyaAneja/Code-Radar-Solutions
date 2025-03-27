#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=-1000;
    for(int j=0;j<n;j++){
        if(max<arr[j]){
            smax=max;
            max=arr[j];
        }
        else if(smax<arr[j]&& arr[j]!=max){
            smax=arr[j];
        }
    }
    if(smax=-10000||smax=max){
    printf("-1");
    }
    else printf("%d",smax);
    return 0;
}
// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0];
//     int smax = -1; // Initialize second maximum as -1 (default for all same elements)

//     for (int j = 1; j < n; j++) { // Start from the second element
//         if (arr[j] > max) {
//             smax = max; // Update second max before max changes
//             max = arr[j]; // Update max
//         } else if (arr[j-1] > smax && arr[j-1] != max) {
//             smax = arr[j]; // Update second max only if the current element is not equal to max
//         }
//     }

//     // If all elements are the same, second max remains -1
//     if (smax == -1) {
//         printf("-1");
//     } else {
//         printf("%d", smax);
//     }

//     return 0;
// }
// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0]; // Initialize max with the first element
//     int smax = -1000000000; // Initialize smax with a very small value (to handle negatives)

//     for (int j = 1; j < n; j++) {
//         if (max<arr[j]) {
//             smax = max; // Update second max before max changes
//             max = arr[j]; // Update max
//         } else if (arr[j] > smax && arr[j] != max) {
//             smax = arr[j]; // Update second max only if the current element is not equal to max
//         }
//     }

//     // If smax still holds the very small initial value, it means there's no second max
//     if (smax == -1000000000 || max == smax) {
//         printf("-1");
//     } else {
//         printf("%d", smax);
//     }

//     return 0;
// }
