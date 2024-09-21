#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1, l2, l3;
    printf("Definir si los lados pertenecen al triángulo a traves de igualdades\n");
    printf("Dame el valor de los lados\n");
    scanf("%f %f %f", &l1, &l2, &l3);
    if(l3==sqrt(pow(l1, 2)+ pow(l2, 2)) || l2==sqrt(pow(l3, 2)- pow(l1, 2))  || l1==sqrt(pow(l3, 2)- pow(l2, 2)))
    {
        printf("Los lados pertenecen al mismo triángulo");
    }
    else
    {
        printf("Los lados no pertenecen al mismo triangulo");
    }
    return 0;
}
