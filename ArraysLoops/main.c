#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arrglos e iteradores!\n");


    int vecto;

    printf("IUngresa el numero de vectores");
    scanf("%i",&vecto);
    int integerArray[vecto];

    for(int i = 0; i <= vecto; i++)
    {
        integerArray[i] = i*i;
        printf("Valor (%i): %i \n", i , integerArray[i]);

    }


    return 0;
}
