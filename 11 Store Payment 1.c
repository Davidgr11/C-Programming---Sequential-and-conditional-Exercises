#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    float monto;
    printf("Dame el monto de la compra\n");
    scanf("%f", &monto);
    printf("¿Que dia lo compraste?\n");
    scanf("%d", &dia);
    if(monto<500)
    {
        if(dia==15 || dia==30)
        {
            monto=monto*0.95;
            printf("El total a pagar es\t%f", monto);
        }
        else
        {
            printf("El total a pagar es\t%f", monto);
        }
    }
    else
    {
        if(monto>=500 && monto<=1000)
        {
            if(dia==15 || dia==30)
            {
                monto=monto*0.85;
                printf("El total a pagar es\t%f", monto);
            }
            else
            {
                monto=monto*0.9;
                printf("El total a pagar es\t%f", monto);
            }
        }
        else
        {
            if(dia==15 || dia==30)
            {
                monto=monto*0.8;
                printf("El total a pagar es\t%f", monto);
            }
            else
            {
                monto=monto*0.85;
                printf("El total a pagar es\t%f", monto);
            }
        }
    }
    return 0;
}
