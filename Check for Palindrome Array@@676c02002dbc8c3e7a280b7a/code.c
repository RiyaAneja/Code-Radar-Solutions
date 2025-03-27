#include<stdio.h>
int palimdrome(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[n-i];
    }
    return arr;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int aa[n];
    for(int k=0;k<n;k++){
        aa[k]=arr[i];
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int rev=palimdrome(arr,n);
    if(rev==aa){
        printf("YES");
    }
    else printf("NO");
    return 0;
}
