#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "table.h"

void createTable(char *path)
{   
    FILE *file = fopen(path, "w");
    double PI = 3.1415, angle_deg;

    fprintf(file, "angle, sin, cos, tan\n");

    for (int angle = 0; angle<=360; angle++){
            
            angle_deg = angle * PI / 180;
            if (angle == 90 || angle == 270){
                fprintf(file,"%i,%.3f,%.3f,undefined\n",angle, sin(angle_deg), cos(angle_deg));
            }else{
                fprintf(file,"%i,%.3f,%.3f,%.3f\n",angle, sin(angle_deg), cos(angle_deg), tan(angle_deg));
            }
            
            
        }
        fclose(file);
}

void readFile(char *path){

    FILE *f = fopen(path, "r");

    if (f==NULL){
        printf("read error\n");
        exit(1);

    }else{

        char line[100];
        
        
        while (1){
            fgets(line,sizeof(line),f);
            printf("%s\n",line);
            if (feof(f)==1){
                break;
            }
        }

        fclose(f);
}
}