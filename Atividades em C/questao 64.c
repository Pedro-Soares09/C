#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
    int B[50][50];
    int M, N;
    int i, j;
    int somaLinha, maiorSoma, linhaMaior;

    printf("Digite o numero de linhas (M): ");
    scanf("%d", &M);

    printf("Digite o numero de colunas (N): ");
    scanf("%d", &N);

    printf("Digite os elementos da matriz B:\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &B[i][j]);
        }
    }

    maiorSoma = -999999; 
    linhaMaior = 0;

    for(i = 0; i < M; i++){
        somaLinha = 0;

        for(j = 0; j < N; j++){
            somaLinha += B[i][j];
        }

        if(somaLinha > maiorSoma){
            maiorSoma = somaLinha;
            linhaMaior = i;
        }
    }

    printf("\nA linha com a maior soma é a linha %d\n", linhaMaior);
    printf("A soma dessa linha é: %d\n", maiorSoma);

    return 0;
}
