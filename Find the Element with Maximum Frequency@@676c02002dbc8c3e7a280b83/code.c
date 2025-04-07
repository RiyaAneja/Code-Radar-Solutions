#include <stdio.h>
#include <limits.h>

int findMaxFrequencyElement(int arr[], int n) {
    int frequency[100001] = {0}; // Assuming values of the array are within the range [0, 100000]
    int maxFreq = 0, maxElem = INT_MAX;
    
    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
        if (frequency[arr[i]] > maxFreq) {
            maxFreq = frequency[arr[i]];
            maxElem = arr[i];
        } else if (frequency[arr[i]] == maxFreq && arr[i] < maxElem) {
            maxElem = arr[i];
        }
    }
    return maxElem;
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
    
    int result = findMaxFrequencyElement(arr, n);
    printf("The element with the highest frequency (or the smallest element in case of tie) is: %d\n", result);
    return 0;
}