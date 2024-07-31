#include <stdio.h>
#include <stdlib.h>

void imprimeValorParcela(float valor, int parcelas){
    printf("Valor da parcela a prazo: R$%.2f",valor/parcelas);
}

int main() {
    float valor;
    int parcelas;

    printf("COMPRA A PRAZO\n");
    printf("Valor da compra: R$");
    scanf("%f",&valor);
    printf("Numero de parcelas: ");
    scanf("%d",&parcelas);
    imprimeValorParcela(valor,parcelas);

    return 0;

}


