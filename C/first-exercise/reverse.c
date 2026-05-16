#include <stdio.h>
int counting(char string[]){

    int count = 0;

    for (int i = 0; string[i] != '\0'; i++)

    {
        count++;
    }

    return count;
}


void reverseString(char string[], int size){

    char reversedText[100];
    int length = 0;

   for (int i=size-1; i >= 0; i--)
   
   {
        reversedText[length++] = string[i];
        
   }
    reversedText[length] = '\0';
    printf("%s \n",reversedText);

}

int main(void)

{   char text[100];
    printf("Entrer une chaine de caracteres: \n");
    scanf("%s",text);
    int size = counting(text) ;
    reverseString(text, size);
    return 0;
}