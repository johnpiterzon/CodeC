#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglo Unidimensionales!\n");

    int integerList[3];
    integerList[0]= 4;
    integerList[1]= 5;
    integerList[2]= 6;

    float floatList[]= {23.4 ,34.5 ,45.6 ,21.8 ,56.7};

    char charlist[4];
    charlist[0]='j';
    charlist[1]='o';
    charlist[2]='h';
    charlist[3]='n';



    printf("\n Primer entero: \t \t %i",integerList[0]);

    printf("\n Ultimo float: \t \t %f",floatList[4]);

    printf("\n Mi nombre: \t \t %c%c%c%c \n",charlist[0],charlist[1],charlist[2],charlist[3]);

    return 0;
}
