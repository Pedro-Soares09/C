#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"");
    
    int A[50][50], T[50][50];
    int M, i, j;

    printf("Digite a ordem da matriz: ");
    scanf("%d", &M);

    printf("Digite os elementos da matriz A:\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            scanf("%d", &A[i][j]);
        }
    }

    
    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            T[i][j] = A[j][i]; 
        }
    }

   
    printf("\nMatriz Transposta T:\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
