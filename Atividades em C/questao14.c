#include <stdio.h>
#include <locale.h>

int main()
{
    
setlocale(LC_ALL,"");

int numero;

    printf("digite um numero inteiro: ");
    scanf("%i", &numero);
    
    if (numero == 0) {
        printf("O numero é zero");
    }
    else 
        if (numero < 0 ){
            printf("o numero é negativo");
        }
    else {
        printf("O número é positivo");
    }  

    return 0;
}