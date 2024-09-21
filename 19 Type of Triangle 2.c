#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, x2, x3;
    printf("Dame el valor de los 3 lados\n");
    scanf("%f %f %f", &x1, &x2, &x3);
    if(x1==x2 && x1==x3)
    {
        printf("Es un triangulo rectangulo");
    }
    else
    {
        if(x1!=x2 && x1!=x3)
        {
            printf("Es un triangulo isoceles");
        }
        else
            printf("Es un triangulo escaleno");
    }
    return 0;
}
