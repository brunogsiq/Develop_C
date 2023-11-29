#include <stdio.h>
#include <stdlib.h>

/*Um caixa eletrônico opera somente com cédulas de 100, 50, 20, 10  e 5 reais.
Faça um algoritmo que leia um valor a sacar e
calcule e mostre o menor número de cédulas de cada tipo no qual o valor pode ser decomposto.
Considere que o sistema admite somente valores múltiplos de 5.*/

int main()
{
  int valorSaque;
  int n100, n50, n20, n10, n5,sobrou;

  scanf("%d", &valorSaque); //valorSaque = 385
  n100 = valorSaque/100; //n100 = 3
  sobrou = valorSaque%100; //sobrou = 85
  n50 = sobrou/50;
  sobrou = sobrou%50;
  n20 = sobrou/20;
  sobrou = sobrou%20;
  n10 = sobrou/10;
  sobrou = sobrou%10;
  n5 = sobrou/5;
  printf("Nota(s) de R$ 100: %d \n", n100);
  printf("Nota(s) de R$ 50: %d \n", n50);
  printf("Nota(s) de R$ 20: %d \n", n20);
  printf("Nota(s) de R$ 10: %d \n", n10);
  printf("Nota(s) de R$ 5: %d \n", n5);


  return 0;
}

