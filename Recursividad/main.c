#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float factorial(n)
{
    printf("Entra a la funcion factorial, n vale: %i",n);

    if(n>1)
    {
        printf("\t La funcion se llamara a si mismo otra ves \n");
        return n * factorial(n-1);
    }
    else
    {
        printf("\t n es igual a 1, termina la recursividad \n");

        return 1;

    }

}




int main()
{
    printf("Recursividad!\n");

    float result = factorial(100000);
    printf("\n El resultado es: %f",result);

    return 0;
}
