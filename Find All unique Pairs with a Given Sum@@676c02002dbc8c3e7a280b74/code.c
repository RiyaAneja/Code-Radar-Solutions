#include<stdio.h>

// Function to calculate and print pairs
void calculate(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == x) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x); // Input size and target sum
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }
    calculate(arr, n, x); // Call the function
    return 0;
}