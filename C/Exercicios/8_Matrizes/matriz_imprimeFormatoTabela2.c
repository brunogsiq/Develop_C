#include <stdio.h>
#include <stdlib.h>

/*
Construa um algoritmo que leia a quantidade de linhas(m) e colunas(n) de uma matriz e
determine os elementos aij dessa matriz a partir da função abaixo:

 Imprima a matriz obtida no formato de tabela.

*/
int main(void) {
  int m, n;
  scanf("%d %d", &m, &n);
  int A[m][n];

  //constrói matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i!=j)
            {
                A[i][j] = 2*(i+j);
            }
            else
                {
                    A[i][j] = (i+j)*(i+j);
                }
        }
    }

  //imprime matriz formato tabela
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", A[i][j]);
        }
    printf("\n");
    }
  return 0;
}
