#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo para um caixa eletrônico que apresente quatro tipos de
operação: 1 – Realizar saque; 2 – Realizar depósito; 3 – Consultar saldo; 4 – Sair da
conta. O saldo deve iniciar em zero e a cada operação de saque ou depósito o saldo deve
ser atualizado.
*/

int main()
{
    int main() {
    int operacao;
    float saldo = 0, saque, deposito;
    do{
        //exibe menu
        printf("Escolha uma das operações abaixo: \n");
        printf("1 - Realizar saque \n");
        printf("2 - Realizar depósito \n");
        printf("3 - Consultar saldo \n");
        printf("4 - Sair da conta \n");
        scanf("%d", &operacao);
        //realiza operação escolhida
    if (operacao == 1){
        printf("Digite valor do saque: ");
        scanf("%f", &saque);
        saldo = saldo - saque;
        } else if (operacao == 2){
        printf("Digite valor do depósito: ");
        scanf("%f", &deposito);
        saldo = saldo + deposito;
        } else if (operacao == 3){
            printf("Saldo = %.2f \n", saldo);
            }
        }while (operacao != 4);

    return 0;
}
