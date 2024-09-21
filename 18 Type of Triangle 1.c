#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Dame los 3 lados\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && a==c)
    {
        printf("Es un triangulo equilatero");
    }
    else
    {
        if(a==b || a==c || b==c)
        {
            printf("Es un triangulo isosceles");
        }
        else
        {
            printf("Es un triangulo escaleno");
        }
    }
    return 0;
}
