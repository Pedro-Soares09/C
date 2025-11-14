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
        soma += A[i][i];
        D[i] = A[i][i];
    }

    printf("\nSoma da diagonal principal: %d\n", soma);

    printf("Vetor D (diagonal principal):\n");
    for(i = 0; i < M; i++){
        printf("%d ", D[i]);
    }

    return 0;
}
