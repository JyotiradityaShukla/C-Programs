#include <stdio.h>

int main(){

    int layers,rows,cols;

    printf("Enter no. of layers: ");
    scanf("%d", &layers);

    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    printf("Enter no. of cols: ");
    scanf("%d", &cols);

    int arr[layers][rows][cols];

    for(int i=0; i<layers; i++){
        for(int j=0; j<rows; j++){
            for(int k=0; k<cols; k++){
                printf("arr[%d][%d][%d]:",i,j,k );
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("\nThe entered array:\n");
    for (int i = 0; i < layers; i++) {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}