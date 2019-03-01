#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Abrir Archivo!\n");

    FILE *archivo;

    archivo = fopen("prueba3.dat","w");

    if(archivo != NULL)
    {
        printf("El archivo se ha creado exitosamente comprueba en la carpeta que ha sido creado \n");
    fclose(archivo);
    }
    else
        {
            printf("El archivo no se ha creado");
        }





    return 0;
}
