#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int num, i;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num >= 100 && num <= 200)
            printf("Você digitou um número entre 100 e 200.\n");
        else
            printf("Você digitou um número fora da faixa entre 100 e 200.\n");
    }

    return 0;
}
