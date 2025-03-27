#include<stdio.h>
void palimdrome(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[n-i-1];
    }
    return;
}
int comp(int arr[],int aa[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=aa[i]){
            return 0;
        }
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int aa[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(comp(arr,aa,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
