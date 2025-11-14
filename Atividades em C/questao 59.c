#include <stdio.h>
#include <locale.h>
#define TAMANHO_DO_VETOR 10


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int vetorV[TAMANHO_DO_VETOR] = {100, 20, 3, 41, 5, 6, 7, 8, 9, 100};
    int i, maiorValor;

    maiorValor = vetorV[0];
  
    for(i = 0; i < TAMANHO_DO_VETOR; i++){
        if(maiorValor <= vetorV[i]){
            maiorValor = vetorV[i];
        }
    }

    printf("O maior valor é %d e está na(s) posição(ões):\n", maiorValor);
    for(i = 0; i < TAMANHO_DO_VETOR; i++){
        if(maiorValor == vetorV[i]){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
