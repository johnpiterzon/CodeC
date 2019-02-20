#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA;
    float floatA;
    char letterA;

    printf("Ingresa un valor del entero A: ");

    scanf("%i", &integerA);

    printf("Ingresa un valor del float A: ");

    scanf("%f", &floatA);

    printf("Ingresa un valor del caracter A: ");

    scanf(" %c", &letterA);

    printf("El entero A es: %i \n", integerA);

    printf("El flotante A es: %f \n", floatA);

    printf("El caracter A es: %c \n", letterA);

    return 0;
}
