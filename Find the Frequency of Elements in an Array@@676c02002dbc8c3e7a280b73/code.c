// #include<stdio.h>
// int freq(int arr[],int n){
//     for(int i=0;i<n;i++){
        
//         int a=arr[i];
//         for(int j=i+1;i<n;i++){
//             int count =0;
//             if(a==arr[j]){
//                 count +=1;
//             }
//            return arr[i],count;
//         }
        
//     }
//     return ;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     freq(arr[i],n);
//     printf("%d %d",arr[i],count);
//     return 0;

// }
#include<stdio.h>

void freq(int arr[], int n){
    int visited[n]; // Array to track visited elements
    for(int i = 0; i < n; i++){
        visited[i] = 0; // Initialize all elements to 0
    }

    for(int i = 0; i < n; i++){
        if(visited[i] == 1){ // Skip already visited elements
            continue;
        }

        int count = 1; // Start count for current element
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1; // Mark element as visited
            }
        }

        printf("%d %d\n", arr[i], count);
    }
}

int main(){
    int n;
    
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

 
    freq(arr, n);

    return 0;
}