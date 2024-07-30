#include <stdio.h>

int main() {

    int n,i=0,fact=1;
    printf("Enter n: ");
    scanf("%d", &n);

    do{

        i++;
        fact=fact*i;
    } while(i<n);

    printf("%d", fact);

/*  
int fact=1;
for(int i=1; i<=n; i++){
    fact=fact*i;
}
*/

    return 0;
}
