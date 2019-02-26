#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cadena de caracteres !\n");
    //int valueC;
    //printf("Ingresa el numero para caracteres:");
    //scanf("%i",&valueC);

//Este codigo no funciona


    char nameC[50];

    int size;

    printf("Ingresar el nombre con gets: \n");
    gets(nameC);
    printf("El nombre es:");
    puts(nameC);

    size = strlen(nameC);

    printf("\n El tamano de la cadena es: %i \n",size);

    char carInv[50];

    int i;
    for(i= size; i< 0; i--)
    {
        for(int j=0; j< 18 ; i++ )
        nameC[i] = carInv[i];
        printf("Mi nombre al revez es:");
            gets(carInv);
    }


    return 0;
}
