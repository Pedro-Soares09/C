#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    
    int i, j=0;
    
    for(i=1;j<101;i++){
        printf("%d + %d = %d\n", j, i, j+i);
        j+=1;
    }
    return 0;
}
