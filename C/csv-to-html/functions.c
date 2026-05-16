#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"

void head(char *path){
    FILE *output;
    output = fopen(path,"w");
    fprintf(output,"<!DOCTYPE html> \n <html lang=\"en\">\n<head>\n<meta charset=\"UTF-8\">\n<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n<title>fichierINT</title>\n</head>\n<body>\n");
    fprintf(output,"<style>\ntable, th, td {border:0.1px solid black;}\n</style>");
    fclose(output);

}

void footer(char *path){
    FILE *output;
    output = fopen(path,"a");
    fprintf(output, "</body>\n</html>");    
    fclose(output);

}

void writeFile(char *path, char *path2){

    FILE *output = fopen(path,"a");
    FILE *file = fopen(path2,"r");

    if (file == NULL){
        printf("Erreur de lecture\n");
        exit(1);
    }
    int nLine = 0;
    char line [200];
    char copy[200];
    char *token;

    fprintf(output,"<table>\n");
    
    while (fgets(line,sizeof(line),file) != NULL)
    {
        fprintf(output,"<tr>\n");

        
        strcpy(copy, line);
        token = strtok(copy,",");
        while (token != NULL)
            {
                if (nLine == 0){
                fprintf(output,"<th>%s</th>\n",token);
                token = strtok(NULL,",");
                }else{
                fprintf(output,"<td>%s</td>\n",token);
                token = strtok(NULL,",");
                }
            }

        fprintf(output,"</tr>\n");
        nLine ++;
    }
    fprintf(output,"</table>\n");



    fclose(output);
    fclose(file);
}