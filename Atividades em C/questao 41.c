#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int k, n;
    int resultado = 1;

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        resultado = resultado * k;
        printf("%d elevado a %d = %d\n", k, i, resultado);
    }

    return 0;
}
