#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b, h, a;
    printf("Dame el valor de la base y la altura del triangulo\n");
    scanf("%f %f", &b, &h);
    a=(b*h)/2;
    printf("Para un triangulo de base %f y altura %f el area es %f", b, h, a);
    return 0;
}
