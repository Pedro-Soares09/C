#include <stdio.h>
#include <locale.h>

int main()
{
float preco_automovel,preco_fabrica, impostos, preco_revendedor;


setlocale(LC_ALL,"");
    
    printf("Digite o preço de fabrica do carro: ");
    scanf("%f",&preco_fabrica);
    
    impostos= 0.45 * preco_fabrica;
    preco_revendedor= 0.28 * preco_fabrica;
    
    preco_automovel= preco_fabrica + preco_revendedor + impostos;
    
    printf("O preço final do seu carro ficará num total de R$ %.2f\n", preco_automovel);
    

    return 0;
}