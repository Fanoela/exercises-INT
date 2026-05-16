#include <stdio.h>

long long U(int index)
{
    
    long long a = 1;
    long long b = -4;
    long long Un;
    long long sum = a + b;

    if (index == 0){
        Un = a;
    } else if (index == 1){
        Un = b;
    } else{
        for (int i=2;i<index;i++){
            Un = 2*b + 3*a;
            a = b;
            b = Un;
            if (i<30){
                sum = sum + Un;
            }
        }
    }
    printf("la somme des 30 premiers termes est de %lli\n",sum);
    return Un;
}


int main(void){

    printf("le 70eme terme est %lli\n", U(70));
}