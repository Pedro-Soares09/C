#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int k, n;
    float resultado = 1; 

    printf("Digite o valor de K: ");
    scanf("%d", &k);

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        resultado = resultado * k;
    }

    printf("%d elevado a %d é igual a %.5f\n", k, n, resultado);
    return 0;
}
