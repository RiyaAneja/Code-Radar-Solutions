// #include<stdio.h>
// int prime(int num){
//     int prime=0;
//     for(int i=2;i<n;i++){
//         if(num%2!=0){
//             prime=1;
//         }
//         }
//     }
//     return i;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int isprime=prime(arr[n],n);
//     printf("%d",i);
    
//     return 0;
// }
// #include <stdio.h>

// int isPrime(int num) {
//     if (num <= 1) return 0; // Numbers less than 2 are not prime
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return 0; // Divisible by another number
//     }
//     return 1; // Number is prime
// }

// int main() {
//     int n;
//     scanf("%d", &n); // Read the size of the array

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]); // Read the array elements
//     }

//     printf("Prime numbers in the array: ");
//     for (int i = 0; i < n; i++) {
//         if (isPrime(arr[i])) {
//             printf("%d ", arr[i]); // Print prime numbers
//         }
//     }
//     printf("\n");
    
//     return 0;
// }
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not prime if divisible
    }
    return 1; // Number is prime
}

int main() {
    int n, primeCount = 0; // Variable to count the primes
    scanf("%d", &n); // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primeCount++; // Increment count for each prime number
        }
    }

    printf("Total number of prime numbers: %d\n", primeCount);

    return 0;
}