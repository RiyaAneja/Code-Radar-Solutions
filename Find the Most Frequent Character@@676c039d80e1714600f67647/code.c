#include <stdoio.h>
#include <string.h>

int main(){
    int str[100];
    int freq[] = {0};
    fgets(str, 100, stdin);
    for( int i = 0 ; i != '\n';i++ ){
        int count = 1;
        if(freq[i] != 1){
            for(int j = i+1 ; j != '\n'; j++){
                if(str[i] == str[j]){
                    count++;
                    freq[j] = 1;
                }
        }
        }
        freq[i] = count;

    }
    int max = freq[0];
    for(int i = 1; i < sizeof(freq)/sizeof(freq[0]); i++){
        if(freq[i] > max){
            max = freq[i];
        }
    }
    printf("%d",str[max]);

}