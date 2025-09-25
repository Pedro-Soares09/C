#include <stdio.h>
#include <math.h> 
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;

    printf("--- Calculadora de Equacao do 2o Grau ---\n");
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);
    
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    
    if (a == 0) {
        printf("Nao e uma equacao do segundo grau (o valor de 'a' nao pode ser zero).\n");
    } else {
        float delta = (b * b) - 4 * a * c;

        if (delta < 0) {
            printf("Nao ha solucoes reais, pois o discriminante (delta) é negativo.\n");
        } else if (delta == 0) {
            float x1 = -b / (2 * a);
            printf("Ha duas solucoes iguais:\n");
            printf("x1 = x2 = %.2f\n", x1);
        } else { 
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Ha duas solucoes reais e diferentes:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}