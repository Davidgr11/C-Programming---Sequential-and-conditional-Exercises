#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lados;
    float m, p;
    printf("¿Cuantos lados tiene el terreno?\n");
    scanf("%d", &lados);
    printf("¿Cuanto mide cada lado?\n");
    scanf("%f", &m);
    p=lados*m;
    printf("El total de metros para poner la cerca es %f\t", p);
    return 0;
}
