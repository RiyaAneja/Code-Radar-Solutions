#include<stdio.h>
int calculate(int arr[n],int n){
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == x) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
    return arr[i],arr[j];    
}
int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pairs=calculate(arr,n);
    printf("%d %d\n",pairs);
    return 0;
}