#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"");
    
    int R[4][5];
    int i, j;
    int maior;
    int linhaMaior = 0, colunaMaior = 0;


    printf("Digite os elementos da matriz 4x5:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &R[i][j]);
        }
    }

   
    maior = R[0][0];

    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            if (R[i][j] > maior) {
                maior = R[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao: linha %d, coluna %d\n", linhaMaior, colunaMaior);

    return 0;
}
