#include <stdio.h>
#include <locale.h>

int main()
{
int x,y,soma;
float quociente, produto;

setlocale(LC_ALL,"");

	printf("Digite um numero: ");
    scanf ("%i",&x);
    printf("Digite outro numero: ");
    scanf ("%i",&y);
    quociente=x/y;
    soma=x+y;
    produto=x*y;
    printf("a soma entre %i + %i é igual a %i\n Já a divisão entre os mesmos é %2.f\n e a multiplicação é %2.f", x,y,soma,quociente,produto);
    
	return 0;
}
