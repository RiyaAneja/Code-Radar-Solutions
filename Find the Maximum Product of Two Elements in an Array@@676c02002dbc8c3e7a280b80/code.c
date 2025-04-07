#include <stdio.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
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
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_product = producto2(arr, n);
    printf("The maximum product of two elements is: %d\n", max_product);

    return 0;
}