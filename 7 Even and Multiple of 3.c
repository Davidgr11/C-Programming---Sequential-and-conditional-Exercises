#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Validar si el valor es par y multiplo de 3\n");
    printf("Dame el numero\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Es par\n");
    }
    if(num%3==0)
    {
        printf("Es multiplo de 3");
    }
    return 0;
}
