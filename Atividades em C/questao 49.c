#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int comando, denominador = 0, filhos, salariosTotais = 0, salariosAteMil = 0;
    float salario, somaSalarios = 0.0, mediaSalario, somaFilhos = 0.0, mediaFilhos, maiorSalario = 0.0;

    do{
        printf("1. Adicionar informações\n");
        printf("2. Sair\n");
        printf("Escolha: ");
        scanf("%d", &comando);

        if(comando == 1){
            printf("\nDigite o salário: ");
            scanf("%f", &salario);
            printf("Digite a quantidade de filhos: ");
            scanf("%d", &filhos);

            denominador++;

            somaSalarios += salario;
            somaFilhos += filhos;

            while(maiorSalario == 0){
                maiorSalario = salario;
                break;
            }
            if(salario > maiorSalario){
                maiorSalario = salario;
            }
            
            salariosTotais++;
            if(salario <= 1000.00){
            salariosAteMil++;
            }
        } 
    } while (comando == 1);
    
    if(salariosTotais != 0){
        mediaSalario = somaSalarios/denominador;
        mediaFilhos = somaFilhos/denominador;

        printf("\nA média de salário é de R$%.2f\n", mediaSalario);
        printf("A média de filhos é: %.2f\n", mediaFilhos);
        printf("O maior salário é R$%.2f\n", maiorSalario);
        printf("%.2f%% de salário até R$1.000,00", ((float)salariosAteMil/salariosTotais) * 100);
    } else{
        printf("Você não informou nenhum dado");
    }
    

    return 0;
}
