#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que calcule a soma da matrizes A e B e guarde o resultada em uma matriz C.
Ao final exiba a matriz C no formato de tabela.
int A[4][5] = {2,3,1,4,5,1,-3,-5,0,8,2,5,6,3,-5,-1,0,1,2,3};
int B[4][5] = {1,2,0,-1,1,0,1,3,1,0,1,2,-1,4,5,2,3,4,1,2};


*/

int main(void) {
  int A[4][5] = {2,3,1,4,5,1,-3,-5,0,8,2,5,6,3,-5,-1,0,1,2,3};
  int B[4][5] = {1,2,0,-1,1,0,1,3,1,0,1,2,-1,4,5,2,3,4,1,2};
  int C[4][5];

  //calcula soma
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
          C[i][j] = A[i][j] + B[i][j];
        }
    }

  //imprime tabela
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
          printf("%3d", C[i][j]);
        }
    printf("\n");
    }

  return 0;
}
