#include<stdio.h>
int max(int n){
    int maxi=-1;
    if(maxi<product){
        maxi=product;
    }
    return maxi;
}
void producto2(int arr[],int n){
    int product=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            product=arr[i]*arr[j];
            int maximum=max(product);
        }
    }
    return ;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int product=producto2(arr,n);
    printf("%d",product);
    return 0;
}