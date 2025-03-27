#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        sacnf("%d",&arr[i]);
    }
    int max=-1;
    for(int j=0;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
            break;
        }

    }
    printf("%d",max);
    return 0;
}