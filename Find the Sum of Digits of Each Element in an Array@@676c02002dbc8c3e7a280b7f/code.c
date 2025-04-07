#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    for(int i=0;i<n;i++){
        int sum=0;
        int digit=arr[i];
        while(digit!=0){
            sum=sum+digit%10;
            digit=digit/10;            
        }
        printf("%d",sum);        
    }
    
    return 0;
}
// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(int i = 0; i < n; i++) {
//         int digit = arr[i];
//         int sum = 0; // Reset the sum for each number
//         while(digit != 0) {
//             sum = sum + digit % 10;
//             digit = digit / 10;            
//         }
//         printf("%d ", sum); // Print the sum of digits for the current number
//     }
//     return 0;
// }