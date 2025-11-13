#include <stdio.h>
#include <math.h>

int main() {
    double A, X, S = 0.0;
    int i;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);

    printf("Digite o valor de X: ");
    scanf("%lf", &X);

    for (i = 1; i <= 20; i++) {
        double num1 = i;
        double den1 = A - (i - 1);

        double num2 = 21 - i;
        double den2 = pow(X, i);

        S += (num1 / den1) * (num2 / den2);
    }

    printf("Valor de S = %.6lf\n", S);

    return 0;
}
