#include <stdio.h>
#include <stdlib.h>

/*Ler um n�mero inteiro e mostrar todas as pot�ncias de 2
menores do que n*/

int main()
{
    int n, x = 0, p = 1;
    printf(" DIGITE UM NUMERO: ");
    scanf("%d", &n);
    while (p < n){
           printf("%d ", p);
           x++;
           p = pow(2,x);
    }

return 0;
}
