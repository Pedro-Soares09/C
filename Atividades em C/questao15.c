#include <stdio.h>
#include <locale.h>

int main()
{
    
setlocale(LC_ALL,"");

int numero;

    printf("digite um numero inteiro: ");
    scanf("%i", &numero);
    
    if (numero % 2 == 0) {
        printf("O numero %i é par", numero);
    }
    
    else {
        printf("O número %i é impar",numero);
    }  

    return 0;
}