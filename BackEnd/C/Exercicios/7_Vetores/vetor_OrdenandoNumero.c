#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um algoritmo para cadastrar 20 números inteiros em um vetor.
Em seguida ordene os elementos do vetor em ordem crescente e exiba o vetor ordenado.

*/
int main(void) {
  int v[20];
  srand(time(NULL));
  for (int x = 0; x < 20; x++){
    v[x] = rand()%10;
  }

  for (int x = 0; x < 20; x++){
    printf("%2d", v[x]);
  }
  printf("\n");

  //ordenação
  int flag = 1;
  while (flag)
  {
  flag = 0;
      for (int x = 0; x < 19; x++)
      {
        if (v[x]>v[x+1])
        {
            int aux = v[x];
            v[x] = v[x+1];
            v[x+1] = aux;
            flag = 1;
        }
      }
  }

  for (int x = 0; x < 20; x++){
    printf("%2d", v[x]);
  }
  printf("\n");


  return 0;
}
