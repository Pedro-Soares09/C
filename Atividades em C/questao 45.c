#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    
    int i, x;
    
    printf("Digite um número para fazer a tabuada: \n");
    scanf("%d", &x);
    
    printf("-----TABUADA DO %d-----\n\n", x);
    
    for (i=1;i<11;i++){
        printf("%d x %d = %d\n",x, i,x*i);
    }
    return 0;
}
