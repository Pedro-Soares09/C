#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	float s = 0, j = 1;
	int i, x = 0;

	printf("Digite um valor para substituir X\n");
	scanf("%d", &x);

	setlocale(LC_ALL,"");

	for(i = 1; i<=20; i++) {
		if(x - i == 0) {
			printf("ERRO: DivisC#o por zero no termo %d(%d - %d = 0) .\n", i,x, i);
			return 0;
		}
		s = s+ j/(x-i);
	}

	printf("O valor da sequencia de S usando x = %d é %.3f\n", x, s);

	return 0;
}
