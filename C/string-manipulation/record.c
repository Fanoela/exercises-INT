#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "record.h"

void addField(){
    FILE *file = fopen("record.csv","a");

    char nom[30], prenom[20], tel[15];
    char genre; 

    // fprintf(file,"nom,prenom,genre,tel\n");

    printf("Entrer nom: ");
    scanf("%s",nom);
    printf("Entrer prenom: ");
    scanf("%s",prenom);
    printf("Entrer genre: ");
    scanf(" %c",&genre);
    printf("Entrer tel: ");
    scanf("%s",tel);

    fprintf(file,"%s,%s,%c,%s\n",nom,prenom,genre,tel);
    fclose(file);

}

int isThere(char *str1,char *str2){
    char copy[50];
    strcpy(copy, str2);

    char *token = strtok(copy,",");
    while (token != NULL)
    {
        if (strcmp(str1,token)==0){
            return 1;
        }
        token = strtok(NULL,",");

    }

    return 0;

}

void modify(char line[50], char *result){

    char copy[50];
    strcpy(copy, line);

    char nom[50], prenom[50], genre[10], tel[20];
    char attribut;

    char *token;

    token = strtok(copy, ",");
    strcpy(nom, token);

    token = strtok(NULL, ",");
    strcpy(prenom, token);

    token = strtok(NULL, ",");
    strcpy(genre, token);

    token = strtok(NULL, ",");
    strcpy(tel, token);

    printf("Entrer 1 pour modifier le nom, 2 pour le prenom, 3 pour le genre et 4 pour le numero: ");
    scanf(" %c", &attribut);

    if (attribut == '1'){
        printf("Entrer nom: ");
        scanf("%s", nom);
    } 
    else if (attribut == '2'){
        printf("Entrer prenom: ");
        scanf("%s", prenom); 
    }
    else if (attribut == '3'){
        printf("Entrer genre: ");
        scanf("%s", genre);
    }
    else if (attribut == '4'){
        printf("Entrer numero de telephone: ");
        scanf("%s", tel);
    }

    result[0] = '\0';

    strcat(result, nom);
    strcat(result, ",");
    strcat(result, prenom);
    strcat(result, ",");
    strcat(result, genre);
    strcat(result, ",");
    strcat(result, tel);

    printf("%s\n", result);

}



void searchWord(void){

    FILE *file = fopen("record.csv","r");
    FILE *temp = fopen("temp.csv","w");

    char search[50];
    printf("Entrer mot-cle: ");
    scanf("%s",search);

    if (file==NULL){
        printf("read error\n");
        exit(1);

    }else{
        char line[100];
        char choix;
        char result[100];

        while (fgets(line, sizeof(line), file) != NULL) {

            if (isThere(search, line)) {
                printf("%s", line);
                printf("Entrer 1 pour modifier, 2 pour supprimer, autre touche pour continuer: ");
                scanf(" %c",&choix);
                if (choix =='1'){
                    modify(line, result);
                    fprintf(temp, "%s", result);
                    
                }else if (choix =='2'){
                    continue;
                }else{
                    fprintf(temp, "%s", line);;
                }
            } else{
                    fprintf(temp, "%s", line);;
                }
    }

    fclose(temp);
    fclose(file);
    
    remove("record.csv"); 
    rename("temp.csv", "record.csv");

}

}

