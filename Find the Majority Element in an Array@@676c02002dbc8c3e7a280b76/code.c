// #include<stdio.h>
// int majority(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count+=1;
//             }
//         }
//     }
//     return count;
// }
// int main(){
//     int n,arr[n];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int maj=majority(arr[n],n);
//     if(maj>(n/2)){
//         printf("%d",maj);
//     }
//     else printf("-1");
// }
#include<stdio.h>

int majority(int arr[], int n) {
    int candidate = -1, count = 0;

    // Step 1: Finding a candidate for the majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verifying the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate; // Majority element
    } else {
        return -1; // No majority element
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maj = majority(arr, n);
    if (maj != -1) {
        printf("The majority element is: %d\n", maj);
    } else {
        printf("No majority element found.\n");
    }

    return 0;
}