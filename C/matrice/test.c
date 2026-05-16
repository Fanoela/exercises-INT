//fady ny mi-include .c

#include "vector.h"
#include "matrice.h"


int main (void){

    int length , scal;
    length = inputLength();
    int u[length],v[length] ;
    inputVectors(u, v, length);
    scal = scalar(u,v, length);
    display(scal);


    int row1, col1, row2, col2;
    inputSize(&row1, &col1, &row2, &col2);
    int mat1[row1][col1];
    int mat2[row2][col2];
    inputMatrix(row1, col1, row2, col2, mat1, mat2);
    productMatrix(row1, col1, row2, col2, mat1, mat2);


    return 1;
}

