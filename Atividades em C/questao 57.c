#include <stdio.h>
#include <locale.h>
#define TAMANHO_DO_VETOR 10


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int vetorA[TAMANHO_DO_VETOR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, vetorB[TAMANHO_DO_VETOR] = {10, 9, 8 , 7, 6, 5, 4, 3, 2, 1}, vetorC[TAMANHO_DO_VETOR * 2];
    int i, j = 0;


    for(i = 0; i < TAMANHO_DO_VETOR; i++){
        vetorC[j] = vetorA[i];
        j++;

        vetorC[j] = vetorB[i];
        j++;  
    }

    for(i = 0; i < TAMANHO_DO_VETOR * 2; i++){
        printf("%d ", vetorC[i]);
    }

    
    return 0;
}
