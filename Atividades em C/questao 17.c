#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");

	int valor1,valor2;

	printf("digite um numero inteiro: ");
	scanf("%i", &valor1);

    printf("digite outro numero inteiro: ");
    scanf("%i", &valor2);

	if (valor1 == valor2) {
		printf("Os numeros são iguais\n ");
	}

	else 
	    if(valor1 > valor2){
		printf("O primeiro número é maior e são diferentes\n ");
	}
	else{
	    printf("o segundo número é maior e são diferentes\n ");
	}

	return 0;
}
