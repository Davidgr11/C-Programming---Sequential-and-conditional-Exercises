#include <stdio.h>
#include <stdlib.h>

int main()
{
    float compra;
    int dia;
    printf("Ingresa el total de la compra\n");
    scanf("%f", &compra);
    printf("Ingresa el dia de la compra\n");
    scanf("%d", &dia);
    if(compra>=500 && compra<=1000)
    {
        compra=compra*0.9;
    }
    else
    {
        if(compra>1000)
        {
            compra=compra*0.85;
        }
    }
    if(dia==15 || dia==30)
    {
        compra=compra*0.95;
    }
    printf("El total de la compra es\t%f", compra);
    return 0;
}
