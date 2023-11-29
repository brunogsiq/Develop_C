#include <stdio.h>
#include <stdlib.h>

/*
 Faça um algoritmo que leia o valor de venda de um vendedor no mês.
 Se o valor de venda for maior do que R$ 30.000,00,
 exiba a mensagem: "Parabéns, você superou a meta do mês!".
*/

int main()
{
    float vendas;
    printf("Insira os VALOR em vendas: R$");
    scanf("%f",&vendas);
    if(vendas>=30000){
       printf("PARABENS, voce superou a meta do mes!.");
    }else{
       printf("NAO FOI DESTA VEZ, MAS NAO DESISTA.");
    }

    return 0;
}
