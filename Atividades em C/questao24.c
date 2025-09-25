#include <stdio.h>
#include <locale.h>

int main()
{
   
    setlocale(LC_ALL, "Portuguese");

   
    int classe_consumidora;
    float consumo_kwh, tarifa,valor_fornecimento,icms, valor_a_pagar;

    printf("--- Calcular O Valor da Sua Conta de Energia ---\n");
    printf("Digite o numero da classe consumidora\n 1 - A\n 2 - B\n 3 - C\n ");
    scanf("%d", &classe_consumidora);

    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo_kwh);
    
    if(classe_consumidora == 1){
	   tarifa = 0.5;
	 
	}else
		if(classe_consumidora == 2){
	   tarifa = 0.8;
	}else 
	    if(classe_consumidora == 3){
	   tarifa = 1.0;
	   
	    }
	    
    if (classe_consumidora == 1 || classe_consumidora == 2 || classe_consumidora == 3) {
        valor_fornecimento = tarifa * consumo_kwh;
        icms = valor_fornecimento * 0.3;
        valor_a_pagar = valor_fornecimento + icms;

        printf("O valor total da sua conta para pagar é de: R$ %.2f\n", valor_a_pagar);
    } else {
        printf("ERRO: Classe invalida! Tente novamente.\n");
    }

    return 0;
}