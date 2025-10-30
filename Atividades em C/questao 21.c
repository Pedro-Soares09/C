#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");

	int a,b,c;

	printf("Digite o primeiro lado do triangulo: ");
	scanf("%d",&a);

	printf("Digite o segundo lado do triangulo: ");
	scanf("%d",&b);

	printf("Digite o terceiro lado do triangulo: ");
	scanf("%d",&c);

	if(a + b > c && b + c > a && a + c > b) {
		printf("Estes valores podem formar um triangulo.\n");

		if (a == b && b == c) {
			printf("Eles formam um triangulo Equilatero!\n");

		} else if (a == b || b == c || a == c) {
			printf("Eles formam um triangulo Isosceles!\n");

		} else {
			printf("Eles formam um triangulo Escaleno!\n");

		}
	} else {
		printf("Estes valores NAO formam um triangulo.\n");
	}
	return 0;
}
