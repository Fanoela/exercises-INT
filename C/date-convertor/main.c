#include <stdio.h>
#include <string.h>
#include "dateConvertor.h"

int main(void){

    char *joursArray[] = {"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
    char *androArray[] = {"alatsinainy","talata","alarobia","alakamisy","zoma","sabotsy","alahady"};

    char *moisArray[] = {"janvier","fevrier","mars","avril","mai","juin","juillet","aout","septembre","octobre","novembre","decembre"};
    char *volanaArray[] = {"janoary","febroary","martsa","aprily","mey","jona","jolay","aogositra","septambra","oktobra","novambra","desambra"};

    char fullDate[50];
    getDate(fullDate);

    char jour[20], date[3], mois[20], year[5]; 

    tokenization(fullDate, jour, date, mois, year);

    char mgDay[20], mgMonth[20]; 

    transDay(mgDay, jour,joursArray, androArray);
    transMonth(mgMonth, mois, moisArray, volanaArray);


    char finalAnswer[50] = "";
    
    concatenation(finalAnswer, mgDay, mgMonth, date, year);
    printf("%s\n", finalAnswer);

    return 0;
}