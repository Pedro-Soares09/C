#include <stdio.h>
#include <locale.h>

int main()
{
int a, b, temp;
setlocale(LC_ALL,"");
    printf("digite o numero A: ");
    scanf ("%i", &a);
    
    printf("digite o numero B: ");
    scanf ("%i", &b);
    
	temp = a;
	a= b;
	b= temp ;
	
    printf("os valores inversos são\n A = %i\n e B = %i\n", a, b);
    
	return 0;
}