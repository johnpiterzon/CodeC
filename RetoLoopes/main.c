#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto Loopes!\n");

    int num1,i;

    i=1;
    printf("Ingresa el primer numero: ");
    scanf("%i",&num1);

    while(i <= num1)
    {
        printf("#\n");
        i++;
    }

    return 0;
}
