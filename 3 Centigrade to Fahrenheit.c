#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("Ingresa los grados centigrados\n");
    scanf("%f", &c);
    f=(c*1.8)+32;
    printf("Grados centigrados %.2f\t farenheit %.2f", c, f);
    return 0;
}
