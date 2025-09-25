#include <stdio.h>
#include <locale.h>

int main()
{
float valor_compra, valor_pago, troco;
int centavos_troco,nota200, nota100, nota50, nota20, nota10, nota5, nota2, moeda1,moeda50,moeda25,moeda10,moeda5;
setlocale(LC_ALL,"");
    printf("digite o valor da compra:R$ ");
    scanf ("%f", &valor_compra);
    
    printf("digite o valor pago pelo cliente:R$ ");
    scanf ("%f", &valor_pago);
    
    troco = valor_pago - valor_compra;
    
    printf("\nTroco: R$ %.2f\n",troco);
    printf("----Troco Detalhado----\n");
    
    centavos_troco = (int)(troco * 100 + 0.5); 
    

    
    nota200=centavos_troco/20000;
    printf("%i X 200 reais\n", nota200);
    centavos_troco%=20000;
    
    nota100= centavos_troco/10000;
    printf("%i X 100 reais\n", nota100);
    centavos_troco%=10000;
    
     nota50=centavos_troco/5000;
    printf("%i X 50reais\n", nota50);
    centavos_troco%=5000;
    
     nota20=centavos_troco/2000;
    printf("%i X 20 reais\n", nota20);
    centavos_troco%=2000;
    
     nota10=centavos_troco/1000;
    printf("%i X 10 reais\n", nota10);
    centavos_troco%=20000;
    
     nota5=centavos_troco/500;
   printf("%i X 5 reais\n", nota5);
    centavos_troco%=500;
    
    nota2=centavos_troco/200;
    printf("%i X 2 reais\n", nota2);
    centavos_troco%=200;
    
    moeda1= centavos_troco/100;
    printf("%i X 1 real\n", moeda1);
    centavos_troco%=100;
    
    moeda50=centavos_troco/50;
   printf("%i X 50 centavos\n", moeda50);
    centavos_troco%=50;
    
    moeda25=centavos_troco/25;
   printf("%i X 25 centavos\n", moeda25);
    centavos_troco%=25;
    
    moeda10=centavos_troco/10;
   printf("%i X 10 centavos\n", moeda10);
    centavos_troco%=10;
    
    moeda5=centavos_troco/5;
    printf("%i X 5 centavos\n", moeda5);
    centavos_troco%=5;
    
	return 0;
}