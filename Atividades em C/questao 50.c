#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int sexo, i, homens = 0, mulheres = 0;
    float altura = 0.00, maiorAltura = 0.0, menorAltura = 0.0, alturaMulheres = 0.0, mediaMulher;

    for(i = 0; i < 15; i++){
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("1. Masculino\n");
        printf("2. Feminino\n");
        printf("Digite o número correspondente: ");
        scanf("%d", &sexo);

        switch (sexo)
        {
        case 1:
            homens++;
            break;
        case 2:
           alturaMulheres += altura;
            mulheres++;
            break;
        default:
            break;
        }

        if(i == 0){
            maiorAltura = altura;
            menorAltura = altura;
        } else if(altura >= maiorAltura){
            maiorAltura = altura;
        } else if(altura <= menorAltura){
            menorAltura = altura;
        }
    }
    
    if(mulheres == 0){
        mediaMulher = 0;
    } else{
        mediaMulher = alturaMulheres/mulheres;
    }

    printf("\nA maior altura é %.2f e a menor é %.2f.", maiorAltura, menorAltura);
    printf("\nA média de altura das mulheres é: %.2f.", mediaMulher);
    printf("\nO número de homens é: %d.", homens);

    return 0;
}
