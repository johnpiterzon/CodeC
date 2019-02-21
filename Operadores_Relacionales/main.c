#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores Relacionales \n");
    float valA, valB;
    valA = 5;
    valB = 10;

    if(valA < valB)
    {
        printf("Pregunta 1: cierto \n");
    }
    else
    {
        printf("Pregunta 1 : falso \n");
    }
    if(valA <= valB)
    {
        printf("Pregunta 2: cierto \n");
    }
    else
    {
        printf("Pregunta 2 : falso \n");
    }
    if(valA > valB)
    {
        printf("Pregunta 3: cierto \n");
    }
    else
    {
        printf("Pregunta 3 : falso \n");
    }
    if(valA >= valB)
    {
        printf("Pregunta 4: cierto \n");
    }
    else
    {
        printf("Pregunta 4 : falso \n");
    }
     if(valA == valB)
    {
        printf("Pregunta 5: cierto \n");
    }
    else
    {
        printf("Pregunta 5 : falso \n");
    }
    if(valA != valB)
    {
        printf("Pregunta 6: cierto \n");
    }
    else
    {
        printf("Pregunta 6 : falso \n");
    }

    return 0;
}
