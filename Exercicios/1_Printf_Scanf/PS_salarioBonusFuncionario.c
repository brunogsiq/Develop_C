#include <stdio.h>
#include <stdlib.h>
/*Escreva um algoritmo para ler o sal�rio de um funcion�rio e aument�-lo em 20%.
Ap�s o aumento, desconte 10% de impostos.
Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio l�quido (com desconto).*/
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
