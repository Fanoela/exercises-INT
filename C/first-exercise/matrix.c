#include <stdio.h>

void printMatrix(int row, int col, int matrix[row][col]){
    for (int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            printf("%d,", matrix[i][j]);
        }
        printf("\n");
    }

};


void productMatrix(int row1, int col1, int row2, int col2, int firstMatrix[row1][col1], int secondMatrix[row2][col2])
{

    int product[row1][col2];  
    if (col1 == row2){

            for (int i = 0; i<row1; i++){
                for (int j=0; j<col2;j++){
                    product[i][j] = 0;
                    for (int k=0; k<col1; k++){
                        product[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                    };
                };
            };
            printMatrix(row1, col2,product);
    }
    else{

        printf("We cannot compute the product of the matrices");
    };

    

};


int main(void){
    int mat1 [3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int mat2 [3][2]={
        {1,1},
        {2,2},
        {3,3}
    };
    productMatrix(3, 3, 3, 2, mat1, mat2);
    return 0;
}