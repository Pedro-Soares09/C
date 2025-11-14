#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "");

    int pessoasSim = 0, pessoasNao = 0;
    int mulherSim = 0, homemNao = 0;
    int totalHomem = 0, totalMulher = 0;
    int i;
    char sexo, pesquisa;

    for(i = 0; i <=20; i++){
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);

        printf("Gostou do produto? (S/N): ");
        scanf(" %c", &pesquisa);
        pesquisa = toupper(pesquisa);

        if(sexo == 'M'){
            totalHomem++;
        } else if(sexo == 'F'){
            totalMulher++;
        }

        switch(pesquisa)
        {
            case 'S':
                pessoasSim++;
                if(sexo == 'F'){
                    mulherSim++;
                }
                break;

            case 'N':
                pessoasNao++;
                if(sexo == 'M'){
                    homemNao++;
                }
                break;

            default:
                printf("Resposta inválida.\n");
                break;
        }
    }

    printf("\nNúmero de pessoas que responderam sim: %d\n", pessoasSim);
    printf("Número de pessoas que responderam não: %d\n", pessoasNao);

    if(totalMulher > 0)
        printf("%.2f%% das mulheres responderam sim.\n", 
               ((float)mulherSim / totalMulher) * 100);
    else
        printf("Nenhuma mulher respondeu a pesquisa.\n");

    if(totalHomem > 0)
        printf("%.2f%% dos homens responderam não.\n", 
               ((float)homemNao / totalHomem) * 100);
    else
        printf("Nenhum homem respondeu a pesquisa.\n");

    return 0;
}
