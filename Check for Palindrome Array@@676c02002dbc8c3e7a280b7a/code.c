#include <stdio.h>

int main() {
    int n, t; 
    scanf("%d", &n); // Read the number of elements

    int arr[n]; 
    for (int b = 0; b < n; b++) { 
        scanf("%d", &arr[b]); // Read the elements of the array
    } 
    
    scanf("%d", &t); // Read the target sum

    int found = 0; // Flag to check if any pair is found
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] + arr[j] == t) {
                printf("%d %d\n", i + 1, j + 1); // Print 1-based indices
                found = 1; // Set the flag to indicate a pair was found
            }
        }
    }

    if (!found) {
        printf("No pairs found that sum to %d\n", t); // Inform if no pairs are found
    }

    return 0;
}