#include <stdio.h>
#include <stdlib.h>

/*3) Criar um programa que leia uma expressão aritmética no formato
 numero1 operação numero2
 exiba o resultado da expressão.
 A operação deve ser uma das quatro operações básicas da

 matemática (+, -, *, /).*/

int main()
{
    float numeroUm, numeroDois;
    char operacao;
    printf(" Digite o Primeiro numero, Depois o sinal da operacao, entao o Segundo numero: ");
    scanf("%f%c%f", &numeroUm, &operacao, &numeroDois);

    switch(operacao)
    {
    case '+':
    printf("%.2f + %.2f = %.2f. ", numeroUm,  numeroDois, numeroUm+numeroDois);
    break;
    case '-':
    printf("%.2f - %.2f = %.2f. ", numeroUm, numeroDois, numeroUm-numeroDois);
    break;
    case '*':
    printf("%.2f * %.2f = %.2f. ", numeroUm, numeroDois, numeroUm*numeroDois);
    break;
    case '/':
    printf("%.2f / %.2f  = %.2f. ", numeroUm, numeroDois, numeroUm/numeroDois);
    break;
    default:
    printf("Nao foi possivel realizar sua operacao Matematica.");
    }
    return 0;
}
