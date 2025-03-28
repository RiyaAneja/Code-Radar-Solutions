// #include <stdio.h>

// int main() {
//     int n, t; 
//     scanf("%d", &n); // Read the number of elements

//     int arr[n]; 
//     for (int b = 0; b < n; b++) { 
//         scanf("%d", &arr[b]); // Read the elements of the array
//     } 
    
//     scanf("%d", &t); // Read the target sum

//     int found = 0; // Flag to check if any pair is found
//     for (int i = 0; i < n; i++) { 
//         for (int j = i + 1; j < n; j++) { 
//             if (arr[i] + arr[j] == t) {
//                 printf("%d %d\n", i + 1, j + 1); // Print 1-based indices
//                 found = 1; // Set the flag to indicate a pair was found
//             }
//         }
//     }

//     if (found==1) {
//         printf("YES"); // Inform if no pairs are found
//     }
//     else printf("NO");

//     return 0;
// }
#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n); // Read the number of elements

    int arr[n]; 
    for (int b = 0; b < n; b++) { 
        scanf("%d", &arr[b]); // Read the elements of the array
    } 
    
    int isPalindrome = 1; // Flag to check if the array is a palindrome
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) { // Compare elements from both ends
            isPalindrome = 0; // Set flag to 0 if a mismatch is found
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n"); // Output if the array is a palindrome
    } else {
        printf("NO\n"); // Output if the array is not a palindrome
    }

    return 0;
}