#include <stdio.h>

int main() {
    double preco, soma = 0, total;
    int cp;

    do {
        printf("Digite o preco do produto (0 para encerrar): ");
        scanf("%lf", &preco);
        
        if (preco > 0) {
            soma += preco;
        }

    } while (preco > 0);

 
    if (soma == 0) {
        printf("Nenhum produto foi registrado.\n");
        return 0;
    }

    
    printf("\nDigite o codigo da condicao de pagamento:\n");
    printf("1 - A vista em dinheiro/cheque (10%% de desconto)\n");
    printf("2 - A vista no cartao (5%% de desconto)\n");
    printf("3 - Em 2 vezes (preco normal)\n");
    printf("4 - Em 3 vezes (acrescimo de 10%%)\n");
    printf("Opcao: ");
    scanf("%d", &cp);

    
    switch (cp) {
        case 1:
            total = soma * 0.90;   
            break;
        case 2:
            total = soma * 0.95;   
            break;
        case 3:
            total = soma;          
            break;
        case 4:
            total = soma * 1.10;   
            break;
        default:
            printf("Codigo invalido.\n");
            return 0;
    }

    printf("\nTotal da compra: R$ %.2lf\n", total);

    return 0;
}
