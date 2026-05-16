#include <stdio.h>

int counting(char string[]){

    int count = 0;

    for (int i = 0; string[i] != '\0'; i++)

    {
        count++;
    }

    return count;
}

int main(void){

    char string[20];
    printf("Entrer une chaine de caracteres: \n");
    scanf("%s",string);

    int numberChar = counting(string);
    printf("%i caractere(s)\n", numberChar);

    return 0;

    
}
