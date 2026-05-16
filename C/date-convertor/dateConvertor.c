#include <stdio.h>
#include <string.h>
#include "dateConvertor.h"

void getDate(char *date){

    printf("Entrer la date [separer par -]\n");
    printf("Exemple: mardi-7-avril-2026\n");
    scanf("%s", date);

}

void transDay(char *day, char *fDay, char **jours, char **andro)
{
    for (int i=0; i<7; i++)
    {
        if(strcmp(fDay,jours[i])==0)
        {
            strcpy(day,andro[i]); 
            break;
        }
    }
}

void transMonth(char *month, char *fMonth, char **mois, char **volana)
{
    for (int i=0; i<12; i++)
    {
        if(strcmp(fMonth,mois[i])==0)
        {
            strcpy(month,volana[i]); 
        }
    }
}

void tokenization(char fullDate[], char *jour, char *date, char *mois, char *year)
{
    char *token;
    token = strtok(fullDate,"-");
    strcpy(jour,&token[0]);
  
    token = strtok(NULL,"-");
    strcpy(date,&token[0]);

    token = strtok(NULL,"-");
    strcpy(mois,&token[0]);

    token = strtok(NULL,"-");
    strcpy(year,&token[0]);

}

void concatenation(char *finalAnswer, char *andro, char *volana, char *date, char *year)
{
    strcat(finalAnswer, andro);
    strcat(finalAnswer, " ");
    strcat(finalAnswer, date);
    strcat(finalAnswer, " ");
    strcat(finalAnswer, volana);
    strcat(finalAnswer, " ");
    strcat(finalAnswer, year);
    
}
