#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf("Definir a que caracter del teclado corresponde\n");
    printf("Dame el valor numerico\n");
    scanf("%d", &valor);
    if(valor>=48 && valor<=57)
    {
        printf("Es un digito");
    }
    else
    {
        if(valor>=65 && valor<=90)
        {
            printf("Es mayuscula");
        }
        else
        {
            if(valor>=97 && valor<=122)
            {
                printf("Es minuscula");
            }
            else
                printf("Caracter especial");
        }
    }
    return 0;
}
