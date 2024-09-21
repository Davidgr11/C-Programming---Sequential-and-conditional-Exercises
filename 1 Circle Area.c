#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, p=3.1416, a;
    printf("DAme el valor del radio\n");
    scanf("%f", &r);
    a=p*pow(r, 2);
    printf("El área del círculo con radio %.4f es %.4f", r, a);
    return 0;
}
