#include <stdio.h>
#include <locale.h>

int main()
{
float raio, area, volume, altura;
const float pi = 3.14;

setlocale(LC_ALL,"");

	printf("digite o valor da altura do cilindro: ");
    scanf ("%f",&altura);
    printf("digite o valor do raio do cilindro: ");
    scanf ("%f",&raio);
    
    area=2*pi*raio*(altura + raio);
    volume=pi*raio*raio*altura;
    printf("a area do seu cilindro é %.2f\n o volume do seu cilindro é %.2f\n", area, volume);
    
	return 0;
}