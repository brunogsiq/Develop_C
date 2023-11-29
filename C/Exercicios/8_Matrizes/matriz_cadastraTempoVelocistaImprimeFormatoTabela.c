#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EXEMPLO 4 - Construa um algoritmo que permita cadastrar os tempos obtidos por 10 velocistas em 5 provas de atletismo,
    //em uma matriz T. Em seguida, o algoritmo deve calcular o tempo médio de cada velocista e armazená-los nessa mesma matriz T.
    //Finalmente, o algoritmo deve imprimir essa matriz no formato de tabela.

    int veloc[10][5];

    for(int x=0; x<10; x++)
    {
        for(int y=0; y<5; y++)
        {
            printf("DIGITE OS TEMPOS: \n");
            scanf(" %d", &veloc[x][y]);
            printf("%5d", veloc[x][y]);
        }
    }
    for(int x=0; x<10; x++)
    {
        for(int y=0; y<5; y++)
        {
            printf("%5d", veloc[10][5]);
        }
     printf("\n");
    }

    return 0;
}
