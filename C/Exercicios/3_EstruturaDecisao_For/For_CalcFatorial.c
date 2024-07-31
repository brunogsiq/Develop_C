#include <stdio.h>
#include <stdlib.h>

/*4. Fatorial
Faça um algoritmo que leia um número N e calcule o seu fatorial.
N! = 1∗2∗3∗...∗( N −1)∗N
*/

int main()
{

  int num, fatorial = 1;
  scanf("%d", &num);
  for (int x = 1; x <= num; x++){
    fatorial = fatorial*x;
  }

  printf("%d! = %d", num, fatorial);
  return 0;
}
