#include <stdio.h>
#include <stdlib.h>


/*Escreva um algoritmo que calcule o aumento de um sal�rio.
O algoritmo deve solicitar:
        o valor do sal�rio
        porcentagem de aumento

        exibir o valor do aumento
        novo sal�rio

*/
int main()
{
    float salarioIni, porcAumento, valorAumento, salarioFn;
    printf("Digite o valor do Salario Incial: ");
        scanf("%f", &salarioIni);
    printf("Digite o valor em Porcentagem do Aumento: ");
        scanf("%f", &porcAumento);
    valorAumento = salarioIni * (porcAumento / 100);
    salarioFn = salarioIni + valorAumento;
    printf("\nO Salario Incial eh: %.2f\n", salarioIni);
    printf("\O Salario Aumentou : %.2f\n", valorAumento);
    printf("Salario com Aumento eh: %.2f\n", salarioFn);
    return 0;
}
