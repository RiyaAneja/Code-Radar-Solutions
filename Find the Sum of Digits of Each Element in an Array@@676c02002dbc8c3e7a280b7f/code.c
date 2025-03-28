// #include<stdio.h>
// void sum(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int a=arr[i];
//         while(a>0){
//             int a=arr[i]%10;
//             arr[i]=arr[i]/10;
//         }
//         return;
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         int sum1=sum(arr[i],n);
//     }
//     printf("%d",&sum1);
//     return 0;
// }
#include<stdio.h>

// Function to calculate the sum of digits of each number in the array
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // Add the last digit
        num /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int sum1 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += sum_of_digits(arr[i]); // Sum up digits of each number
    }

    printf("Total sum of digits: %d\n", sum1); // Print the final result
    return 0;
}