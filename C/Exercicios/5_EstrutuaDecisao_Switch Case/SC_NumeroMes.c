#include <stdio.h>
#include <stdlib.h>

/*01 - Faça um algoritmo que leia um número referente a um mês do ano e imprima a quantidade de
dias do mês lido. Se o número for maior do que 12 ou menor do que 1, exiba a mensagem “mês
inválido”.*/
int main()
{
    int mes;
    printf("Digite o numero: \n");
    scanf("%d", &mes);

    switch (mes)
    {
     case 1:
     printf("Janeiro tem 31 dias.");
     break;
     case 2:
     printf("Fevereiro  tem 28 dias.");
     break;
     case 3:
     printf("Marco tem 31 dias.");
     break;
     case 4:
     printf("Abril tem 30 dias.");
     break;
     case 5:
     printf("Maio tem 31 dias.");
     break;
     case 6:
     printf("Junho tem 30 dias.");
     break;
     case 7:
     printf("Julho tem 31 dias.");
     break;
     case 8:
     printf("Agosto tem 31 dias.");
     break;
     case 9:
     printf("Setembro tem 30 dias.");
     break;
     case 10:
     printf("Outubro tem 31 dias.");
     break;
     case 11:
     printf("Novembro tem 30 dias.");
     break;
     case 12:
     printf("Dezembro tem 31 dias.");
     break;
     case 13:
     printf("Este numero nao corresponde a nenhum mes.");
    }
    return 0;
}
