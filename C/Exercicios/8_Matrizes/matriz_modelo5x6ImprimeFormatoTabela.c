#include <stdio.h>
#include <stdlib.h>

int main()
{
   //EXEMPLO 3 - Faça um algoritmo que leia uma matriz numérica 5x6 e depois mostre seus elementos na forma de tabela.
    int m[5][6];
    //CADASTRA A MATRIZ//
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<6; j++)
        {
            printf("Digite elemento da posicao: %d e %d", i,j);
            scanf("%d", &m[i][j]);
        }
    }
    //IMPRIME EM FORMA DE TABELA//
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<6; j++)
        {
            printf("%3d", m[i][j]);
        }
     printf("\n");
    }

    return 0;
}
