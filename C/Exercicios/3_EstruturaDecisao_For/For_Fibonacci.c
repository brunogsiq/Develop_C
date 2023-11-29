#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um algoritmo que imprima os N primeiros n�meros da sequ�ncia de Fibonacci.
Essa sequ�ncia come�a com 1 e 1, e cada n�mero seguinte � a soma dos sois anteriores.

1, 1, 2, 3, 5, 8, 13, 21,...
*/

int main()
{

  int N, an_1 = 1, an_2 = 1, an;
  scanf("%d", &N);
  printf("%d \n%d \n", an_1, an_2);
  for (int x = 3; x <= N; x++){
    an = an_1 + an_2;
    an_1 = an_2;
    an_2 = an;
    printf("%d\n", an);
  }

  return 0;
}

