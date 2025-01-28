#include <stdio.h>
int main(){
    char str[10],str1[100];
    int a;
    scanf("%s",&str);
    scanf("%d",&a);
    scanf("%s",&str1);
    printf("Name: %s\n",str);
    printf("Age: %d\n",a);
    printf("Hobby: %s",str1);
    return 0;
}