#include <stdio.h>

int main() {
    int n1 = 1, n2 = 1, n3, i;

    printf("Os 10 primeiros termos da serie de Fibonacci:\n");
    printf("%d %d ", n1, n2); 

    for (i = 3; i <= 10; i++) {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }

    printf("\n");
    return 0;
}
