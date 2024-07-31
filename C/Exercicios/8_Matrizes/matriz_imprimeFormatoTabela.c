#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EXEMPLO 2
    int A[3][4] = {0,2,3,4,1,-2,3,5,2,4,-1,0};
    //Imprime matriz formato tabela
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
    printf("\n");
    }

    printf("\n\n");

    return 0;
}
