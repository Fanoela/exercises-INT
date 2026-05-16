#include <stdio.h>

void sumVector(int array1[], int array2[], int array3[], int size) {
  
    for (int i = 0; i<size; i++)
    {
        array3[i] = array1[i] + array2[i];


    }
}


int scalarProduct(int array1[], int array2[], int size) {

    int scalar = 0;
  
    for (int i = 0; i<size; i++)
    {
        scalar += array1[i] * array2[i];
    }

    return scalar;
}

int main(void){

    int firstArray[3] = {1,2,3};
    int secondArray[3] = {4,5,6};

    int scalar = scalarProduct(firstArray, secondArray, 3);
    printf("%i\n",scalar);


    int thirdArray[3] = {0,0,0};
    sumVector(firstArray, secondArray, thirdArray, 3);

    for (int i = 0; i < 3; i++) {
        printf("%d ", thirdArray[i]);
    }




    return 0;
}