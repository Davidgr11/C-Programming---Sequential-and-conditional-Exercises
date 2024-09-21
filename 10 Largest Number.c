#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Numero mayor\n");
    printf("Dame 3 numeros\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("El mayor entre %f, %f y %f es %f", a, b, c, a);
    }
    else
    {
        if(b>c && b>a)
        {
            printf("El mayor entre %f, %f y %f es %f", a, b, c, b);
        }
        else
        {
            if(c>a && c>b)
            {
                printf("El mayor entre %f, %f y %f es %f", a, b, c, c);
            }
        }
    }
    return 0;
}
