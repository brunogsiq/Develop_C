#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia a velocidade, em km/h, de um carro.
Caso seja maior do que 60 km/h, exiba uma mensagem dizendo “Multado”
e o valor da multa.
O valor da multa corresponde a R$ 10,00 por km/h acima de 60 km/h.

*/

int main()
{
  float velocidade, valorMulta;

  scanf("%f", &velocidade);
    if (velocidade > 60)
    {
        valorMulta = (velocidade - 60)*10;
        printf("Valor multa: R$%.2f", valorMulta);
    }

  return 0;
}
