#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    float a, s;
    printf("¿Cuanto te pagan por hora sin impuestos?\n");
    scanf("%f", &a);
    printf("¿Cuantos dias a la semana trabajas?\n");
    scanf("%d", &d);
    s=((a*8)*d)*0.65;
    printf("LO que ganas a la semana con impuestos aplicados es\t %f", s);
    return 0;
}
