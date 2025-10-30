#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");

	int qtd_maca;
	float total, preco;

	printf("digite quantas maçãs você comprará: ");
	scanf("%i", &qtd_maca);
	

	if (qtd_maca >= 12) {
		preco=0.25;
	}

	else {
	    preco= 0.30;
	}
	
	total= preco * qtd_maca;
	
	printf("Suas %i Maçãs ficaram num total de: R$ %.2f\n",qtd_maca,total);

	return 0;
}
