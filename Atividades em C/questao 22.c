#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL,"");

	int a,b,operacao;
	float resultado;

	printf("Digite um valor: ");
	scanf("%d",&a);

	printf("Digite o segundo valor: ");
	scanf("%d",&b);
	
	printf("Digite qual operação você quer executar:\n 1 Adição\n 2 Subtração\n 3 Multiplicação\n 4 Divisão\n");
	scanf("%d", &operacao);
	
	if(operacao == 1){
	   resultado = a + b;
	   printf("O resultado da adição é: %.2f\n", resultado);
	   
	}else
		if(operacao == 2){
	   resultado = a - b;
	   printf("O resultado da Subtração é: %.2f\n", resultado);
	   
	}else 
	    if(operacao == 3){
	   resultado = a * b;
	   printf("O resultado da multiplicação é: %.2f\n", resultado);
	   
	}else
	    if(operacao == 4){
	   if (b != 0){
	   resultado = a / b;
	   printf("O resultado da Divisão é: %.2f\n", resultado);
	   } else {
            printf("Erro: Nao é possivel dividir por zero.\n");
	   }
	   
	}else{
	    printf("ERRO: operação invalida! Tente novamente\n");
	}

	return 0;
}

