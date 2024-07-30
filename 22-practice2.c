#include <stdio.h>

int main() {

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1, pro; i<=10; i++){
        pro=n*i;
        printf("%d * %d = %d \n", n,i,pro);
    }
    return 0;
}

