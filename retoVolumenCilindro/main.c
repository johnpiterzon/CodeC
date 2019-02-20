#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846
#include <stdbool.h>

int main()
{
    float r,h,A,D,V,l;

    printf("Calculo propiedades de un Cilindro \n");
    printf("Ingresa el valor del radio en metros:");
    scanf("%f", &r);
    printf("Ingresa el valor del Altura en metros:");
    scanf("%f", &h);

    A = M_PI * pow (r,2);
    D = 2*r;
    V = A * h;
    l = V * 1000;

    printf("El area en metros cuadrados es: %f \n", A, "m^2");

    printf("El diametro en metros es  %f \n", D);

    printf("El volumen en metros cubicos es  %f \n", V);

    printf("El volumen en litros es:  %f \n", l);

    printf("Gracias por usar nuestro servicio de mediciones cilindricas \n");

    return 0;
}
