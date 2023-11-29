#include <stdio.h>
#include <stdlib.h>
/*Escreva um algoritmo para ler o salário de um funcionário e aumentá-lo em 20%.
Após o aumento, desconte 10% de impostos.
Imprima o salário inicial, o salário com o aumento e o salário líquido (com desconto).*/
int main()
{
    float salarioIni, bonus20, imposto, salarioLiq;
    printf("Entre com o valor do Salario Inicial: ");
        scanf("%f",&salarioIni);
    bonus20=salarioIni*1.2;
    imposto=bonus20*0.1;
    salarioLiq=bonus20 - imposto;
    printf("\nSalario Inicial eh: %.2f\n", salarioIni);
    printf("O valor com Bonus de 20PorCt eh: %.2f\n", bonus20);
    printf("O valor de imposto de 10PorCT eh: %.2f\n", imposto);
    printf("Seu Salario Liquido eh: %.2f.\n\n", salarioLiq);
    return 0;
}
