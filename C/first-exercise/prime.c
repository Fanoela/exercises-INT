#include <stdio.h>
#include <stdbool.h>


bool is_prime(int number)
{
    int stop = (number/2) + 1;
    if (number == 0 || number == 1)
    
    {
        return false;
    }

    else{

        for (int i=2; i<stop; i++)
        {
            if (number % i == 0)
            {
                return false;
            }
        }

        return true;
    }
}

int main (void) {

    int count = 0;
    int n = 0;
    while (count < 25)
    {
        if (is_prime(n) == 1)
        {

            printf("%i: %i\n",count+1, n);
            count ++;
        }

        n++;
    }

}