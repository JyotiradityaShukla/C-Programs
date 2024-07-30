#include <stdio.h>

int main() {

    int row, column;
    char sym='*';
    printf("Enter rows: ");
    scanf("%d", &row);

    printf("Enter rows: ");
    scanf("%d", &column);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            printf("%c", sym);
        }
        printf("\n");
    }

    return 0;
}