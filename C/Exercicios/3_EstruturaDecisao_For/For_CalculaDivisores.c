#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia um valor inteiro N e mostre seus divisores.
Exemplo: N = 6. Divisores: 1, 2, 3 e 6.*/

int main()
{
  int num;
  scanf("%d", &num);

  for (int x = 1; x <= num; x++)
  {
    if (num%x == 0)
    {
      printf("%d\n", x);
    }
  }

  return 0;
}

