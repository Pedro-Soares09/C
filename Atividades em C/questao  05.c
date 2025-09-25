#include <stdio.h>
#include <locale.h>

int main()
{
float cm,resultado;
const float pole= 2.54;

setlocale(LC_ALL,"");

	printf("digite o valor em cm: ");
    scanf ("%f",&cm);
    resultado =cm/pole;
    printf("%.2f centimetros é igual a %.2f polegadas", cm, resultado);
    
	return 0;
}