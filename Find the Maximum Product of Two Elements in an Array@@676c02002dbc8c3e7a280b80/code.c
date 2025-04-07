#include <stdio.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    if(a>b) printf("%d",a);
    else printf("%d",b);
    return;
}

// Function to calculate the maximum product of two elements in an array
int producto2(int arr[], int n) {
    int maximum = -1; // Initialize maximum to a very small value
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int product = arr[i] * arr[j];
            maximum = max(maximum, product);
        }
    }
    return maximum;
}

int main() {
    int n;
    
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_product = producto2(arr, n);
    printf("%d", max_product);

    return 0;
}