#include<stdio.h>
int main(){
    int n;
    int a=0;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int j=0;j<n;j++){
        if(max<arr[j]&& max!=arr[j]){
            max=arr[j];
            if(max>arr[j]){
                a=0;
                break;
            }
        }
        else if(max==arr[j]){
            a=-1;
            printf("%d",a);
        }

    }
    printf("%d",max);
    return 0;
}