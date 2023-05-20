#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que imprima os N primeiros números da sequência de Fibonacci.
Essa sequência começa com 1 e 1, e cada número seguinte é a soma dos sois anteriores.

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

