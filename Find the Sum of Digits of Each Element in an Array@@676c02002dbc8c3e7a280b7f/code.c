#include<stdio.h>
int cal(int num){
    int n,sum=0;
    while(num!=0){
        n=n%10;
        sum+=n;
        num=num/10;        
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],arrr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int summ=cal(arr[i]);
        for(int j=0;j<n;j++){
            arrr[j]=summ;
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",&arr[j]);
    }
    return 0;
    
}