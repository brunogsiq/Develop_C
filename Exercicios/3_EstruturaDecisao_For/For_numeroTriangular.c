#include <stdio.h>
#include <stdlib.h>

/*
Fa�a uma algoritmo que leia um n�mero inteiro positivo e verifique se ele � um n�mero triangular.
Um n�mero � triangular quando � resultado da multplica��o de 3 n�meros consecutvos. Ex: 24 = 2*3*4.
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
