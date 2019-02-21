#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto condicionales \n");

    printf("Adivina que numero es del 1 al 10 \n");

    int num = 5;
    int numUsr;

    printf("Ingresa un numero:");
    scanf("%i",&numUsr);

    if(numUsr == num)
    {
        printf("Si es el numero ganaste");
    }
    else
    {
        printf("No es el numero Perdiste jajaja");
    }

    return 0;
}
