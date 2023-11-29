#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que calcule o desconto de um produto. O algoritmo deve solicitar:
 valor do produto
 porcentagem de desconto
exibir o valor desconto
 novo valor do produto.*/

int main()
{
    float valorProd, porcDesconto, desconto, valorDesconto;

    printf("Digite o valor do Produto: R$");
    scanf("%f", &valorProd);
    desconto=valorProd-(valorProd*0.05);
        if(valorProd<=20)
        {
            porcDesconto = 100 * 0.1;
            valorDesconto = valorProd * 0.1;
            desconto=valorProd-(valorProd*0.1);
        }
        else if(valorProd<=50)
            {
                porcDesconto = 100 * 0.2;
                valorDesconto = valorProd * 0.2;
                desconto=valorProd-(valorProd*0.2);
            }else
                {
                    porcDesconto = 100 * 0.3;
                    valorDesconto = valorProd * 0.3;
                    desconto=valorProd-(valorProd*0.3);
                }

    printf("\nO valor do Produto sem Desconto eh: R$%.2f\n", valorProd);
    printf("\nA porcentagem de Desconto eh: %.2f%%\n", porcDesconto);
    printf("\nO Valor do Desconto eh: R$%.2f\n", valorDesconto);
    printf("\nO valor do Produto com Desconto eh: R$%.2f\n", desconto);
    return 0;
}


 /*}if(valorProd>=30){
            desconto=valorProd-(valorProd*0.2);
            porcDesconto = valorProd*0.2;
        }*/
