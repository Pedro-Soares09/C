#include <stdio.h>

int main() {
    int num;
    int soma = 0;
    int quantidade = 0;

    printf("Digite numeros positivos (caso digite um numero negativo ira encerrar):\n");

    while (1) {
        scanf("%d", &num);

        if (num < 0) {  
            break;      
        }

        soma += num;
        quantidade++;
    }

    if (quantidade > 0) {
        double media = (double)soma / quantidade;
        printf("Soma = %d\n", soma);
        printf("Media = %.2lf\n", media);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}
