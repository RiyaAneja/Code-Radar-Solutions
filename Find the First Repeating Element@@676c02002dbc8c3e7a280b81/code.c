#include <stdio.h>

// Function to find the first repeating element in the array
int firstrepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i]; // Return the first repeating element
            }
        }
    }
    return -1; // Return -1 if no repeating element is found
}

int main() {
    int n;
    // printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    // printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int frep = firstrepeating(arr, n);
    if (frep == -1) {
        // printf("No repeating elements found.\n");
    } else {
        printf(" %d\n", frep);
    }

    return 0;
}