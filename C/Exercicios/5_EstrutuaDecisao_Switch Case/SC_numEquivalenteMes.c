#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia um n�mero e mostre a qual m�s ele corresponde. Se o
valor for maior do que 12 ou menor do que 1, diga �Valor n�o corresponde a nenhum
m�s�. */

int main()
{
    int mes;

    printf("Digite um n�mero correspondente a um mes :\n");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
    printf("Janeiro");
    break;
    case 2:
    printf("Fevereiro");
    break;
    case 3:
    printf("Mar�o");
    break;
    case 4:
    printf("Abril");
    break;
    case 5:
    printf("Maio");
    break;
    case 6:
    printf("Junho");
    break;
    case 7:
    printf("Julho");
    break;
    case 8:
    printf("Agosto");
    break;
    case 9:
    printf("Setembro");
    break;
    case 10:
    printf("Outubro");
    break;
    case 11:
    printf("Novembro");
    break;
    case 12:
    printf("Dezembro");
    break;
    default:
    printf("Valor n�o corresponde a nenhum mes");

    }
    return 0;
}
