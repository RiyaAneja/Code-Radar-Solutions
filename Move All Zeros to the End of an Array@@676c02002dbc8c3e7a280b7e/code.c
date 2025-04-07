#include <stdio.h>

void move0toend(int arr[], int n) {
    int index = 0; // Pointer for non-zero elements

    // Traverse the array and move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the rest of the array with zeros
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to move zeros to the end
    move0toend(arr, n);

    // Output the modified array
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}