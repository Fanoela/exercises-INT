#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "record.h"


int main(void){
    char choice;


    do{
        printf("Entrer 1 pour ajouter un champ, 2 pour chercher/modifier/supprimer, 3 pour quitter ");
        scanf(" %c", &choice);

        if (choice == '1'){
            addField();
        } 
        else if (choice == '2'){
            searchWord();
        } else if (choice == '3'){
            exit(1);
        } 
    }while(choice != '3');

    return 0;

}


