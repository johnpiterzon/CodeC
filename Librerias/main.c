#include <stdio.h>
#include <stdlib.h>
#include <stri
#include "Operaciones.h"
int main()
{
    printf("Librerias!\n");

    float first =10;
    float second = 15;
    float result;
    int option;

    printf("Soy una calculadora");
    printf("Que operacion deseas realizar? \n");

    printf("1 suma \n");
    printf("2 resta \n");
    printf("3 multiplicacion \n");
    printf("4 division \n");

    scanf("%i",&option);

    switch(option)
    {
    case 1:
        result  = addition(first,second);
        break;
    case 2:
        result = substraction(first,second);
        break;
    case 3:
        result = multiplication(first,second);
        break;
    case 4:
        result = division(first, second);
        break;

    }

    printf("El resultado es : %f",result);

    return 0;
}
