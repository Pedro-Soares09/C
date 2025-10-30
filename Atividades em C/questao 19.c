#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");

	int valor1,valor2,valor3;

	printf("digite o primeiro valor: ");
	scanf("%i", &valor1);
	
	printf("digite o segundo valor: ");
	scanf("%i", &valor2);
	
	printf("digite o terceiro valor: ");
	scanf("%i", &valor3);
	

	if (valor1 > valor2 && valor1 > valor3) {
		printf("O maior número é: %i\n", valor1);
	}

	else 
	    if (valor2 > valor1 && valor2 > valor3) {
		printf("O maior número é: %i\n", valor2);
	}
	
	else{
	    printf("O maior número é: %i\n", valor3);
	}
	
	return 0;
}
