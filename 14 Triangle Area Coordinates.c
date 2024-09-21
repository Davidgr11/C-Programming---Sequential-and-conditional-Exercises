#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, y1, y2, z1, z2;
    float a;
    printf("Dame las coordenadas del primer punto del triángulo\n");
    scanf("%d %d", &x1, &x2);
    printf("Dame las coordenadas del segundo punto del triangulo\n");
    scanf("%d %d", &y1, &y2);
    printf("Dame las coordenadas del tercer punto del triangulo\n");
    scanf("%d %d", &z1, &z2);
    a=(float)((((x1*y2)+(y1*z2)+(z1*x2))-((x1*z2)+(z1*y2)+(y1*x2)))/2);
    printf("El area del triangulo sera de:\t%f", a);
    return 0;
}
