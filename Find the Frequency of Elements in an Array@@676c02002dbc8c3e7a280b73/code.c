// #include<stdio.h>

// void freq(int arr[], int n){
//     int visited[n]; // Array to track visited elements
//     for(int i = 0; i < n; i++){
//         visited[i] = 0; // Initialize all elements to 0
//     }

//     for(int i = 0; i < n; i++){
//         if(visited[i] == 1){ // Skip already visited elements
//             continue;
//         }

//         int count = 1; // Start count for current element
//         for(int j = i + 1; j < n; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//                 visited[j] = 1; // Mark element as visited
//             }
//         }

//         printf("%d %d\n", arr[i], count);
//     }
// }

// int main(){
//     int n;
    
//     scanf("%d", &n);
    
//     int arr[n];
    
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }

 
//     freq(arr, n);

//     return 0;
// }
#include<stdio.h>

void freq(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark duplicates as -1
            }
        }
        if(arr[i] != -1) { // Skip already processed elements
            printf("%d %d\n", arr[i], count);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    freq(arr, n);
    return 0;
}