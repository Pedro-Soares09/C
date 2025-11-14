#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"");

    int A[50][50];
    int D[50];
    int M, i, j;
    int soma = 0;

    printf("Digite a ordem da matriz: ");
    scanf("%d", &M);

    printf("Digite os elementos da matriz:\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            scanf("%d", &A[i][j]);
        }
    }

 
    for(i = 0; i < M; i++) {
        soma += A[i][M-1-i];
        D[i] = A[i][M-1-i];
    }

    printf("\nSoma da diagonal secundaria: %d\n", soma);

    printf("Vetor D (diagonal secundaria):\n");
    for(i = 0; i < M; i++){
        printf("%d ", D[i]);
    }

    return 0;
}
