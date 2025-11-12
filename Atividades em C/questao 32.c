#include <stdio.h>
#include <locale.h>

int main()
{
int i, num, maior;

    setlocale(LC_ALL,"");
    
    for(i = 1; i<=20; i++){
        printf("Digite o %dª número: ", i);
        scanf("%d", &num);
        
        if(num > maior){
            maior=num;
        }
    }
        printf("O maior número digitado foi %d\n", maior);
    
    
    
    return 0;
}
