#include<stdio.h>
int firstrepeating(int arr[],int n){
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                found=1;
                printf("%d",&arr[i]);
                break;
            }
        }
    }
    if(found==0){
        printf("-1");
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