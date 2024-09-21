#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, x1, x2;
    printf("Dame el valor de a, el de b y el de c\n");
    scanf("%f %f %f", &a, &b, &c);
    x1=(-b + sqrt(pow(b, 2)-(4*a*c)))/(2*a);
    x2=(-b - sqrt(pow(b, 2)-(4*a*c)))/(2*a);
    printf("Los valores que toma x son %f y %f", x1, x2);
    return 0;
}
