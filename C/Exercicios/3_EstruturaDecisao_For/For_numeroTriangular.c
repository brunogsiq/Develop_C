#include <stdio.h>
#include <stdlib.h>

/*
Faça uma algoritmo que leia um número inteiro positivo e verifique se ele é um número triangular.
Um número é triangular quando é resultado da multplicação de 3 números consecutvos. Ex: 24 = 2*3*4.
*/

int main(void) {
  int num;
  scanf("%d", &num);
    for (int x = 1; x < num/2; x++)
    {
        if (x*(x+1)*(x+2) == num)
        {
          printf("%d numero triangular", num);
        }
    }

  return 0;
}
