#include<stdio.h>
int freq(int arr[],int n){
    for(int i=0;i<n;i++){
        
        int a=arr[i];
        for(int j=i+1;i<n;i++){
            int count =0;
            if(a==arr[j]){
                count +=1;
            }
           return arr[i],count;
        }
        
    }
    return arr[i],count;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    freq(arr[i],n);
    printf("%d %d",arr[i],count);
    return 0;

}