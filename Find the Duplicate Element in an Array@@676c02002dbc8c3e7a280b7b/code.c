#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;i<n-1;i++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
            }
        }
    }
    return 0;
}