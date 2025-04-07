#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int digit=arr[i];
        while(digit!=0){
            sum=sum+digit%10;
            digit=digit/10;            
        }
        printf("%d",sum);        
    }
    
    return 0;
}