#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    float vetorSoma[10], soma = 0.0;
    int i;

   
    for(i = 0; i < 10; i++){
        printf("Digite o número da posição %d: ", i + 1);
        scanf("%f", &vetorSoma[i]);

        soma += vetorSoma[i];
    }

    float tamanho = (float)sizeof(vetorSoma)/sizeof(vetorSoma[0]);

    printf("O valor da média é: %.2f", soma/tamanho);
    
    
    return 0;
}
