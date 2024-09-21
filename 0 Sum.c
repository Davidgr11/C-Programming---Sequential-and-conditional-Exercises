#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, suma;
    printf("Dame dos valores\n");
    scanf("%f %f", &a, &b);
    suma=a+b;
    printf("El resultado de sumar %f + %f es\n%f", a, b, suma);
    return 0;
}
