#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    
    int i;
    
    printf("-----TABUADA DO 7-----\n\n");
    
    for (i=1;i<11;i++){
        printf("7 x %d = %d\n",i,7*i);
    }
    return 0;
}
