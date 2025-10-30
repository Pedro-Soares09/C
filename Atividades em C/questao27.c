#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    
    int i;
    
    for(i=15;i<=30;i++){
        printf("%d^2 = %d\n", i, i*i);
    }
    return 0;
}
