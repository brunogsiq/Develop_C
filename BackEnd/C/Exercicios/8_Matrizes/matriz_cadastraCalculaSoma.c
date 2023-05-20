#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EXEMPLO 1
    int A[3][4] = {0,2,3,4,1,-2,3,5,2,4,-1,0};
    int soma = 0;

    //calcula soma
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma = soma + A[i][j];
        }
    }

    //exibe soma
    printf("Soma = %d", soma);

    printf("\n\n");

    return 0;
}
