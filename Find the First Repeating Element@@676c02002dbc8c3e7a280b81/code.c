#include<stdio.h>
int firstrepeating(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[j];
                break;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int frep=firstrepeating(arr,n);
    printf("%d",frep);
    return 0;
}