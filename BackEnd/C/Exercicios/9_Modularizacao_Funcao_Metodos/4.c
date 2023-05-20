#include <stdio.h>
#include <stdlib.h>

Questão 1 - Cálculo salário

int main(void) {
  float horasTrabalhadas, valorHora, salBruto, salLiquido;

  printf("Digite a qtde horas trabalhada no mês: ");
  scanf("%f", &horasTrabalhadas);
  printf("Digite o valor da hora: ");
  scanf("%f", &valorHora);

  salBruto = horasTrabalhadas*valorHora;
  salLiquido = salBruto - salBruto*0.15;

  printf("Salário Bruto: %f\n", salBruto);
  printf("Salário líquido: %f\n", salLiquido);

  return 0;
}
