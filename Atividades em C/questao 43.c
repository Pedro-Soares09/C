#include <stdio.h>

int main() {
    double massaInicial, massa;
    int tempo = 0;

    printf("Digite a massa inicial (em gramas): ");
    scanf("%lf", &massaInicial);

    massa = massaInicial;

    while (massa >= 0.5) {
        massa = massa / 2;   
        tempo += 50;        
    }

    printf("Massa inicial: %.2lf g\n", massaInicial);
    printf("Massa final: %.2lf g\n", massa);
    printf("Tempo necessario: %d segundos\n", tempo);

    return 0;
}
