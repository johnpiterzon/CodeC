#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Loopes While!\n");

    int limit;
    printf("Ingresa un muero sera el limite de nuestro iterador:");
    scanf("%i",&limit);

    int i = 1;

    while(i<= limit)
    {
        printf("El numero es igual a: %i \n", i);
        i++;
    }

    return 0;
}
