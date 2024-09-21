#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, u, d, c;
    printf("Dame un numero mayor a 100 y menor a 1000\n");
    scanf("%d", &num);
    c=num/100,
    num=num%100;
    d=num/10;
    u=num%10;
    printf("Tiene %d unidades %d decenas %d centenas", u, d, c);
    return 0;
}
