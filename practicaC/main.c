#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Matriz!\n");
    int ii,jj;
    scanf("%i",&ii);
    scanf("%i",&jj);

    float mArrayi[ii][jj];


    for (int i=0; i< ii; i++)
    {
        for(int j=0; j< jj ; j++)
        {
            mArrayi[i][j] = rand();
            printf("%f \t",i,j, mArrayi[i][j]);
        }
    printf("\n");
    }




    return 0;
}
