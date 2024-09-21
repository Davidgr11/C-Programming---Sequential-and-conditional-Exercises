#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ang;
    printf("Dame el valor del angulo\n");
    scanf("%d", &ang);
    if(ang==90)
    {
        printf("Es un angulo recto");
    }
    else
    {
        if(ang>90)
        {
            printf("Es un angulo obtuso");
        }
        else
        {
            printf("Es un angulo agundo");
        }
    }
    return 0;
}
