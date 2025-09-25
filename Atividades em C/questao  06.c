#include <stdio.h>
#include <locale.h>

int main()
{
float raio, area;
const float pi = 3.14;

setlocale(LC_ALL,"");

	printf("digite o valor do raio:" );
    scanf ("%f",&raio);
    area =pi*raio*raio;
    printf("a area do circulo com raio igual a %.2f é %.2f\n",raio,area);
    
	return 0;
}