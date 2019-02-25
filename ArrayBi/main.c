#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Array Bidimencional!\n");

    int bidimencionalArray[4][4];

    bidimencionalArray[0][0] = 11;
    bidimencionalArray[0][1] = 12;
    bidimencionalArray[0][2] = 13;
    bidimencionalArray[0][3] = 14;


    bidimencionalArray[1][0] = 21;
    bidimencionalArray[1][1] = 22;
    bidimencionalArray[1][2] = 23;
    bidimencionalArray[1][3] = 24;


    bidimencionalArray[2][0] = 31;
    bidimencionalArray[2][1] = 32;
    bidimencionalArray[2][2] = 33;
    bidimencionalArray[2][3] = 34;


    bidimencionalArray[3][0] = 41;
    bidimencionalArray[3][1] = 41;
    bidimencionalArray[3][2] = 41;
    bidimencionalArray[3][3] = 41;

    printf("Valor en (0,1): %i \n" , bidimencionalArray[0][0]);
    printf("Valor en (0,2): %i \n" , bidimencionalArray[0][1]);
    printf("Valor en (0,3): %i \n" , bidimencionalArray[0][2]);
    printf("Valor en (0,4): %i \n" , bidimencionalArray[0][3]);



    return 0;
}
