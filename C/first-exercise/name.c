#include <stdio.h>

void greeting(char *n[20]);


void greeting(char *n[20]){

    printf("Entrer nom\n");

    scanf("%s",n);
}

int main(void){

    char x[20];

    greeting(&x);
    printf("Hello %s\n",x);
    return 1;
}