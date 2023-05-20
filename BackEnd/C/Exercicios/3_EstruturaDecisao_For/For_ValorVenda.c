#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um algoritmo que leia:
 o valor de compra de um produto
 informe o seu valor de venda.

Para calcular o valor de venda adota-se a seguinte regra:
 se o valor de compra for menor do que R$ 100,00 acrescenta-se 40% sobre o valor de compra
 caso contrário, acrescenta-se 30%.*/

int main()
{
    float valorProd, valorVenda;
    printf("Digite o valor de compra do Produto: R$ ");
    scanf("%f", &valorProd);

    if(valorProd<100)
    {
     valorVenda=valorProd*1.4;
    }else
        {
        valorVenda=valorProd*1.3;
        }

    printf("O valor de venda do Produto eh: R$ %.2f", valorVenda);
    return 0;
}
