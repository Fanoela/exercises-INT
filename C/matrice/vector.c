#include <stdio.h> //anaty compilateur
//#include "vector.h" //chemin du fichier


int inputLength(){
    int size;
    printf("Entrer taille des vecteurs:\n");
    scanf("%i", &size);
    return size;
}

void inputVectors(int *u, int *v, int size){
    printf("Vecteur u\n");
    for (int i=0; i<size; i++){
        scanf("%i", &u[i]);
    }

    printf("Vecteur v\n");
    for (int j=0; j<size; j++){
        scanf("%i", &v[j]);
    }
}


int scalar(int u[], int v[], int size){

    int s = 0;

    for (int i = 0; i<size; i++){
        s += u[i]*v[i];
    }

    return s;

}

void display(int s){
    printf("Le produit scalaire des deux vecteurs est %i\n", s);
}

