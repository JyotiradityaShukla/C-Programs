#include <stdio.h>

int main() {

    int n, sum;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=10; i>0; i--){
       sum=n*i;
       printf("%d * %d = %d \n", n,i,sum); 
    }
    return 0;
}