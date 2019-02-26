#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float   Exponente(int res)
{
    float expo = sqrt(res);



    return(expo);
}



int main()
{
    printf("Reto de exponente!\n");

    float expp = Exponente(9);
    printf("Resultado es: %f ",expp);


    return 0;
}
