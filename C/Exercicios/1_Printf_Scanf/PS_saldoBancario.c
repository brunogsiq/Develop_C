#include <stdio.h>
#include <stdlib.h>

int main(){
    float saldoInicial, salario, retirada,saldoParcial;

    printf("EXTRATO BANCARIO\n");
    printf("Saldo Inicial: ");
    scanf("%f",&saldoInicial);
    printf("Salario: ");
    scanf("%f",&salario);
    saldoParcial = saldoInicial+salario;
    printf("Saldo parcial: %.2f\n",saldoParcial);
    printf("1a retirada: ");
    scanf("%f",&retirada);
    printf("Saldo parcial: %.2f\n",saldoParcial-retirada);
    saldoParcial = saldoParcial-retirada;
    printf("2a retirada: ");
    scanf("%f",&retirada);
    printf("Saldo parcial: %.2f\n",saldoParcial-retirada);
    saldoParcial = saldoParcial-retirada;
    printf("3a retirada: ");
    scanf("%f",&retirada);
    saldoParcial = saldoParcial-retirada;
    printf("Saldo final: %.2f\n",saldoParcial);



    return 0;
}
