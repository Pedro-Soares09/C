#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
float s = 0, i, j = 1;

    setlocale(LC_ALL,"");
    
    for(i = 1; i<=50; i++){
       s = s + j/i;
        j = j + 2;
       
    }
   
        printf("O valor da sequencia de S é: %.3f\n", s);
    
    return 0;
}
