#include <stdio.h>
#include <stdlib.h>

/*3) Criar um programa que leia uma express�o aritm�tica no formato
 numero1 opera��o numero2
 exiba o resultado da express�o.
 A opera��o deve ser uma das quatro opera��es b�sicas da

 matem�tica (+, -, *, /).*/

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
