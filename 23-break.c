#include <stdio.h>

int main() {

 /*   for(int i=1, n; ;i++){

        printf("Enter n: ");
        scanf("%d", &n);
        if(n%2!=0){

            printf("End");
            break;
        }
    

    } */

    int n;
    do{
        printf("Enter n: ");
        scanf("%d", &n);
        if (n%2!=0){
            printf("End");
            break;
        }
    }while(1);
    return 0;
}

// break statement- exit the loop