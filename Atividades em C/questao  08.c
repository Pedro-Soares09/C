#include <stdio.h>
#include <locale.h>

int main()
{
float total_vendas,comissao, salario,salario_final;

setlocale(LC_ALL,"");

	printf("digite o valor do salario fixo do vendedor: ");
    scanf ("%f",&salario);
    printf("digite o total em reais de vendas: ");
    scanf ("%f",&total_vendas);
    
   comissao= 0.15*total_vendas;
   salario_final= comissao + salario;
    printf("o salario fixo do vendedor é %.2f\n E com a comissão das suas vendas ele recebera %.2f\n", salario, salario_final);
    
	return 0;
}