#include <stdio.h>
#include <stdlib.h>

Quest�o 1 - C�lculo sal�rio

int main(void) {
  float horasTrabalhadas, valorHora, salBruto, salLiquido;

  printf("Digite a qtde horas trabalhada no m�s: ");
  scanf("%f", &horasTrabalhadas);
  printf("Digite o valor da hora: ");
  scanf("%f", &valorHora);

  salBruto = horasTrabalhadas*valorHora;
  salLiquido = salBruto - salBruto*0.15;

  printf("Sal�rio Bruto: %f\n", salBruto);
  printf("Sal�rio l�quido: %f\n", salLiquido);

  return 0;
}
