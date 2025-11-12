#include <stdio.h>
#include <locale.h>

int main()
{
int i, dentro = 0, fora = 0, num;

    setlocale(LC_ALL,"");
    
    for(i = 1; i<=10; i++){
       printf("Digite o %d° número.\n", i);
       scanf("%d", &num);
       if(num >=10 && num<=50){
           dentro++;
       }else{
           fora++;
       
       }
    }
   
        printf("Os numeros entre 10 e 50 são: %d\n", dentro);
        
        printf("Os numeros fora 10 e 50 são: %d\n", fora);
    
    return 0;
}
