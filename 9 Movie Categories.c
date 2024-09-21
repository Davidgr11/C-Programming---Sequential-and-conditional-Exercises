#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("Validar edad para ubicar acceso en cines\n");
    printf("Dame tu edad\n");
    scanf("%d", &edad);
    if(edad<15)
    {
        printf("Clasificacion A");
    }
    else
    {
        if(edad>=15 && edad<18)
        {
            printf("Clasificacion B15");
        }
        else
        {
            printf("Acceso libre");
        }
    }
    return 0;
}
