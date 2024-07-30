#include <stdio.h>

int main() {

/*    int n,i;
    printf("enter n: ");
    scanf("%d", &n);
    i=1;

    while(i<=n){
        printf("%d \n", i);
        i++;
    }

    i=n;
    do{
        printf("%d \n", i);
        i--;
    }while(i>=1);   */

    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int sum=0;
    for(int i=1, j=n; i<=n && j>=1; i++, j-- ){

        sum=sum+i;
        printf("%d \n", j);

    }

    printf("sum is %d \n", sum);


    return 0;
}