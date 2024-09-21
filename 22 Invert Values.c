#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicial, a, b, c, d;
    printf("Dame un numero mayor a 1000 y menor a 10000\n");
    scanf("%d", &inicial);
    a=inicial/1000;
    inicial=inicial%1000;
    b=inicial/100;
    inicial=inicial%100;
    c=inicial/10;
    d=inicial%10;
    inicial=(d*1000)+(c*100)+(b*10)+a;
    printf("EL número invertido sera\t%d", inicial);
    return 0;
}
