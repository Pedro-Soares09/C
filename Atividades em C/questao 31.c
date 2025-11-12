#include <stdio.h>

int main()
{
float c;
int f;

    printf("Tabela de conversão de Fahrenheit para Celsius\n");
    printf("---------------------------------------------\n");
    printf("Fahrenheit\tCelsius\n");
    
    for(f = 50; f<=65; f++){
        c = 5.0 / 9.0 * (f - 32);
        printf("%d\t\t%.2f\n", f, c);
    }
    
    
    return 0;
}
