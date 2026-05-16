#include <stdio.h>
//#include "matrice.h"

void printMatrix(int row, int col, int matrix[row][col]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void inputSize(int *row1, int *col1, int *row2, int *col2)
{
    printf("First matrix\n");

    printf("Rows: ");
    scanf("%i", row1);

    printf("Columns: ");
    scanf("%i", col1);

    printf("\nSecond matrix\n");

    printf("Rows: ");
    scanf("%i", row2);

    printf("Columns: ");
    scanf("%i", col2);
}

void inputMatrix(
    int row1, int col1,
    int row2, int col2,
    int mat1[row1][col1],
    int mat2[row2][col2]
)
{
    printf("\nEnter first matrix:\n");

    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col1; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%i", &mat1[i][j]);
        }
    }

    printf("\nEnter second matrix:\n");

    for (int i = 0; i < row2; i++){
        for (int j = 0; j < col2; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%i", &mat2[i][j]);
        }
    }
}

void productMatrix(
    int row1, int col1,
    int row2, int col2,
    int firstMatrix[row1][col1],
    int secondMatrix[row2][col2]
)
{
    if (col1 != row2){
        printf("We cannot compute the product of the matrices\n");
        return;
    }

    int product[row1][col2];

    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){

            product[i][j] = 0;

            for (int k = 0; k < col1; k++){
                product[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    printf("\nProduct matrix:\n");
    printMatrix(row1, col2, product);
}
