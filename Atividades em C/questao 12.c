#include <stdio.h>
#include <locale.h>

int main()
{
float media1, media2, media_geral,soma;
int nota1 = 7,nota2 = 8, nota3 = 9;
int nota4 = 4,nota5 = 5,nota6 = 6;

setlocale(LC_ALL,"");
    
    media1=(nota1+nota2+nota3)/3;
    
    media2=(nota4+nota5+nota6)/3;
    
    soma= media1 + media2;
    
    media_geral= (media1 + media2)/2;
    
     printf("Sua primeira media foi %.2f e a segunda %.2f\n A soma das medias é %.2f\n e a media das médias é %.2f\n",media1,media2,soma,media_geral);
    
    return 0;
}
