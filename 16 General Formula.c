#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, x1, x2;
    printf("Dame los valores de la ecuaci�n de segundo grado\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a==0)
    {
        printf("Error de divivi�n entre cero");
    }
    else
    {
        if((b*b)-(4*a*c)<0)
        {
            printf("Error de ra�z imaginaria");
        }
        else
        {
            x1=(-b + sqrt(pow(b, 2)-(4*a*c)))/(2*a);
            x2=(-b - sqrt(pow(b, 2)-(4*a*c)))/(2*a);
            printf("Los valores que toma x son \t%f y %f", x1, x2);
        }
    }
    return 0;
}
