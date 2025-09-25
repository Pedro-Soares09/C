#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");

	int a,b,c,temp;

	printf("digite o primeiro valor: ");
	scanf("%i", &a);
	
	printf("digite o segundo valor: ");
	scanf("%i", &b);
	
	printf("digite o terceiro valor: ");
	scanf("%i", &c);
	

	if (a > b ) {
		temp = a;
		a=b;
		b=temp;
	}
	if (a > c ) {
		temp = a;
		a=c;
		c=temp;
	}
	
	if(b>c ){
	    temp =b ;
		b=c;
		c=temp;
	}
	
	 printf("Valores em ordem crescente: %i, %i, %i\n", a, b, c);
	
	return 0;
}