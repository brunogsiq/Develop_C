
#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia o consumo de g�s de um condom�nio
  calcule o valor a pagar a partir da f�rmula a seguir (c corresponde ao consumo).
v(c) {15c para c<=10 e 15c+20 para c>10}

*/

int main()
{
    float consumo, conta;

    printf("Digite o valor para o consumo mensal do gas: ");
    scanf(" %f", &consumo);

    if(consumo<=10)
      {
      conta=15*consumo;
      printf("O Valor a pagar eh: R$ %.2f reais.\n", conta);
      }else if(consumo>10)
             {
             conta=15*consumo+20;
             printf("O Valor a pagar eh: R$ %.2f reais.\n", conta);
             }
    return 0;
}
