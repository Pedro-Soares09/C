#include <stdio.h>

int main() {
    double altura, PesoIdeal;
    int sexo;

    printf("Digite sua altura: ");
    scanf("%lf", &altura);

 
    if (altura < 0) {
        printf("Altura Invalida.\n");
        return 0;
    }

    printf("Digite 1 para sexo Feminino e 2 para Masculino: ");
    scanf("%d", &sexo);

    if (sexo == 1) {
        PesoIdeal = 62.1 * altura - 44.7;
    } 
    else if (sexo == 2) {
        PesoIdeal = 72.7 * altura - 58;
    } 
    else {
        printf("Digite um sexo valido.\n");
        return 0;
    }

    printf("Seu peso ideal é de %.2lf kg\n", PesoIdeal);

    return 0;
}
