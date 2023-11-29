#include <stdio.h>
#include <stdlib.h>

/* Empresa IFSC está com uma promoção de 15% de desconto nas compras acima de R$ 200,00.
Faça um algoritmo que leia o valor de uma compra e calcule e mostre o valor a pagar.

*/

int main()
{
    float compras,desconto;
    printf("Digite o valor de sua compra: R$");
    scanf("%f", &compras);
    if(compras>=200){
        desconto=compras*0.15;
        compras=compras-desconto;
        printf("Voce recebeu os desconto previsto de R$ %.2f e PAGARA SOMENTE: R$%.2f :D.", desconto,compras);
    }else{
        printf("Dessa vez nao houve desconto :D.");
    }
    return 0;
}
