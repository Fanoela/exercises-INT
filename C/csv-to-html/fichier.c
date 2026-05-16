#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"



int main(void){

    char path[50] = "index.html";
    char inputPath[50] = "fichierINT.csv";

    head(path);
    writeFile(path, inputPath);
    footer(path);
    
    

    return 1;
}