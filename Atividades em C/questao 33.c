#include <stdio.h>
#include <locale.h>

int main()
{
int i, soma = 0, conta = 0;

    setlocale(LC_ALL,"");
    
    for(i = 13; i<=73; i++){
       if( i % 2 == 0){
           soma += i;
           conta++;
       }
    }
    float media = (float)soma / conta;
   
        printf("A soma dos numeros pares é %d\n", soma);
        
        printf("A media da soma dos números pares é %.2f\n", media);
    
    return 0;
}
