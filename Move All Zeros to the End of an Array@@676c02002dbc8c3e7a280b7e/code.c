#include<stdio.h>
int move0toend(int arr[],n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[n-i]=arr[i];
            arr[i]=arr[i]+1;
        }
    }
    return arr[];

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int brr[n]=move0toend(arr[],n);
    for(int j=0;j<n;j++){
        printf("%d",brr[j]);
    }
    return 0;
}