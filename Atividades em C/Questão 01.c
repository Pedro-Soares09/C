
#include <stdio.h>
#include <locale.h>

int main()
{
int x,y, resultado;

setlocale(LC_ALL,"");

	printf("Digite um número: ");
    scanf ("%i",&x);
    printf("Digite outro número: ");
    scanf ("%i",&y);
    resultado=x*y;
    printf("O resultado da sua multiplicação de %i X %i é %i",x, y, resultado);
	return 0;
}
