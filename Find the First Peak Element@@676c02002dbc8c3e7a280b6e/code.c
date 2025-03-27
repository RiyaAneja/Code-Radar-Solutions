#include<stdio.h>
int main(){
    int n;
    int a=-1;
    
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n>1 && arr[1]==arr[0]){
        printf("-1");
        return 0;
    }
    int max=arr[0];
    for(int j=1;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
            if(max>arr[j+1]){
                break;
            }
        }
         
         
    }
    printf("%d",max); 
    

    return 0;
}
// #include<stdio.h>

// int main() {
//     int n;
//     int a = -1;
    
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // If the maximum number and the second element are the same
//     if (n > 1 && arr[1] == arr[0]) {
//         printf("-1");
//         return 0;
//     }

//     int max = arr[0];
//     for (int j = 1; j < n; j++) {
//         if (max < arr[j]) {
//             max = arr[j];
//             if (j + 1 < n && max > arr[j + 1]) {
//                 break;
//             }
//         }
//     }

//     printf("%d", max); 

//     return 0;
// }