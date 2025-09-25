#include <stdio.h>
#include <locale.h>

int main()
{
    
setlocale(LC_ALL,"");

int numero;

    printf("digite um numero inteiro: ");
    scanf("%i", &numero);
    
    if (numero >= 0 ) {
        printf("O numero é: %i\n ", numero);
    }
    
    else {
        printf("O número com sinal ivertido é: %i\n ",-numero);
    }  

    return 0;
}