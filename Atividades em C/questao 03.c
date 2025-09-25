#include <stdio.h>
#include <locale.h>

int main()
{
int x,y,quociente, resto;

setlocale(LC_ALL,"");

	printf("Digite o dividendo: ");
    scanf ("%i",&x);
    printf("Digite o divisor: ");
    scanf ("%i",&y);
    quociente=x/y;
    resto=x%y;
    printf("%i/%i é igual a %i com resto %i", x,y,quociente,resto);
    
	return 0;
}