#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, x1, x2, h;
    printf("Ingresa los valores de a. b, c\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a==0)
    {
        printf("Error división entre cero");
    }
    else
    {
        h=pow(b, 2)-(4*a*c);
        if(h<0)
        {
            printf("Error raiz imaginaria");
        }
        else
        {
            x1=((-b)+sqrt(h))/(2*a);
            x2=((-b)-sqrt(h))/(2*a);
            printf("Raices \t%f %f", x1, x2);
        }
    }
    return 0;
}
