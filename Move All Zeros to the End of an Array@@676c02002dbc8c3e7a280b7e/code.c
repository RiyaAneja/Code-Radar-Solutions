#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int index = 0; // Keeps track of the position to place non-zero elements

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i]; // Move non-zero element to the correct position
        }
    }

    while (index < n) {
        arr[index++] = 0; // Fill the remaining positions with zeroes
    }
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    moveZeroesToEnd(arr, n); // Call the function to move zeroes

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print the modified array
    }
    printf("\n");

    return 0;
}