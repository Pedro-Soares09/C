#include <stdio.h>
#include <locale.h>

int main()
{
int valor_saque, nota200, nota100, nota50, nota20, nota10, nota5, nota2;
setlocale(LC_ALL,"");
    printf("digite o valor do saque: ");
    scanf ("%i", &valor_saque);
    nota200=valor_saque / 200;
    valor_saque= valor_saque % 200;
    
    nota100 = valor_saque / 100;
    valor_saque= valor_saque % 100;
    
    nota50= valor_saque / 50;
    valor_saque= valor_saque % 50;
    
    nota20= valor_saque / 20;
    valor_saque= valor_saque % 20;
    
    nota10 = valor_saque / 10;
    valor_saque= valor_saque % 10;
    
    nota5 = valor_saque / 5;
    valor_saque= valor_saque % 5;
    
    nota2 = valor_saque / 2;
    valor_saque= valor_saque % 2;
    
    printf("a quantidade de cada notas constates no seu saque sera:\n");
    
    printf("Notas de 200: %d\n", nota200);
    
   printf("Notas de 100: %d\n", nota100);
   
   printf("Notas de 50 %d\n", nota50);
   
   printf("Notas de 20 %d\n", nota20);
   
    printf("Notas de 10: %d\n", nota10);
    
    printf("Notas de 5: %d\n", nota5);
    
    printf("Notas de 2: %d\n", nota2);
    

	return 0;
}