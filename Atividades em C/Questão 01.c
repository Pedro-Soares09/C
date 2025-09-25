/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
