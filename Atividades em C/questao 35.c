#include <stdio.h>
#include <locale.h>

int main()
{
int i, n, h = 0;

    setlocale(LC_ALL,"");
    
    printf("Digite um número.\n");
    scanf("%d", &n);
    
    for(i = 1; i<=n; i++){
       h+=i;
    }
   
        printf("O resultado de H é: %d\n", h);
    
    return 0;
}
