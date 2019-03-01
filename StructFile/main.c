#include <stdio.h>
#include <stdlib.h>

struct personalData
{
    char name[20];
    char lastName[20];
    int age;
};


int main()
{
    printf("Estructura de Datos!\n");

    struct personalData person;

    FILE *archivo;
    archivo = fopen("DatosPersonales001.dat", "wb");

    if(archivo != NULL)
    {
        fflush(stdin);

    printf("Leer datos: /n");
    printf("Ingresar nombre: \n");
    gets(person.name);

    printf("Ingresar apeelido: \n");
    gets(person.lastName);

    printf("Ingresar la Edad: \n");
    scanf("%i", &person.age);

    printf("Imprimir datos: \n");
    printf("%s \n ", person.name);
    printf("%s \n ", person.lastName);
    printf("%i \n ", person.age);


    fwrite(&person,sizeof(person),1,archivo);

    fclose(archivo);

    }
    else
    {
        printf("no se ha podido crear el archivo");
    }


     if(archivo = NULL)
    {

    fread(&person,sizeof(person),1,archivo);

    printf("Imprimir los datos \n");
    printf("Nombre: %s \n",person.name);
    printf("apellido: %s \n",person.lastName);
    printf("Edad: %i \n",person.age);




    fclose(archivo);

    }
    else
    {
        printf("no se ha podido crear el archivo");
    }

    return 0;
}

