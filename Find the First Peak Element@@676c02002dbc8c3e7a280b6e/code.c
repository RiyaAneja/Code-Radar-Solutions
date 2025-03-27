#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=-1;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            break;
        }

    }
    printf("%d",max);
    return 0;
}