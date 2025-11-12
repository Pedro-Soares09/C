#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
double s = 0, i;

    setlocale(LC_ALL,"");
    
    for(i = 1; i<=10; i++){
       s = s + 1.0/i;
    }
   
        printf("O valor de S é: %.5f\n", s);
    
    return 0;
}
