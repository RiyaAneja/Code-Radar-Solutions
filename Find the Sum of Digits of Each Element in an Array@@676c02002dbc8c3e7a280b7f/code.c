// #include<stdio.h>
// int cal(int num){
//     int n,sum=0;
//     while(num!=0){
//         n=n%10;
//         sum+=n;
//         num=num/10;        
//     }
//     return sum;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n],arrr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         int summ=cal(arr[i]);
//         for(int j=0;j<n;j++){
//             arrr[j]=summ;
//         }
//     }
//     for(int j=0;j<n;j++){
//         printf("%d ",&arr[j]);
//     }
//     return 0;  
// }
#include<stdio.h>

int cal(int num) {
    int n, sum = 0;
    while (num != 0) {
        n = num % 10;  // Fixing incorrect usage of `n`
        sum += n;
        num = num / 10;        
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], arrr[n];  // Arrays to store numbers and results
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Reading array elements
    }

    for (int i = 0; i < n; i++) {
        arrr[i] = cal(arr[i]); // Calculating and storing digit sum of each element
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arrr[i]);  // Printing the results
    }

    return 0;  
}