#include<stdio.h>
void palimdrome(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[n-i];
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int aa[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    aa[n]=arr[n];
    int rev=palimdrome(arr,n);
    if(rev==aa){
        printf("YES");
    }
    else printf("NO");
    return 0;
}
