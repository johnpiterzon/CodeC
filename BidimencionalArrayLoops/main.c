#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos bidimensionales e iteradores!\n");
    int fila,columna;
    printf("Escribe el numero de fila: ");
    scanf("%i",&fila);
    printf("Escribe el numero de columna: ");
    scanf("%i",&columna);

    int integerArray[fila][columna];
    for(int i =0;i<fila;i++)
    {
        for(int j = 0; j<columna;j++ )
        {
            integerArray[i][j] = ((i+j)*100 +j);
            printf("(%i,%i): %i \n ", i, j,integerArray[i][j]);
        }
    }



    return 0;
}
