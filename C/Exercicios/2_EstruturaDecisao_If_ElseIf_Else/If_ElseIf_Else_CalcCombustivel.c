#include <stdio.h>
#include <stdlib.h>
/*
. Pre�o combust�vel
Fa�a um algoritmo que determine quanto ser� gasto para encher o tanque de um ve�culo:
sabendo-se que o pre�o do �lcool � de R$ 3,50,
o pre�o do diesel � de R$ 3,00
o pre�o da gasolina � de R$ 4,50.

O algoritmo deve ler a capacidade do tanque (em litros)
e o tipo de combust�vel
(A - �lcool, D - Diesel ou G - Gasolina)
exibir o valor gasto para encher o tanque do ve�culo.
*/
int main()
{
    char combustivel;
    float tanque,capacidade, litro,litros;
    float precoComb;
    printf("Digite a: Alcool - d: Diesel - g: Gasolina\n\n");
    printf("Digite o tipo de combustivel: ");
    scanf(" %c", &combustivel);

    while(combustivel !='a' && combustivel!='g' && combustivel !='d')
    {
     printf("COMBUSTIVEL INVALIDO\n\n");
     printf("Digite o tipo de combustivel: ");
     scanf(" %c", &combustivel);
     if(combustivel =='a' || combustivel =='g' || combustivel =='d')
        {
         printf("Digite quantos litros cabe em seu veiculo: ");
         scanf(" %f", &tanque);
         printf("Digite quanto litros deseja abastecer: ");
         scanf(" %f", &litro);
        }
    if(combustivel=='a')
    {
     precoComb=3.50;
     capacidade=tanque*precoComb;
     litros=litro*precoComb;
     printf("\nPara abastecer totalmente seu tanque que possui %.2f litros serao gastos R$ %.2f Reais.\n", tanque, capacidade);
     printf("\nPara abastecer somente %.2f litros serao gastos R$ %.2f Reais.\n", litro, litros);
    }else if(combustivel=='g')
     {
      precoComb=4.00;
      capacidade=tanque*precoComb;
      litros=litro*precoComb;
      printf("\nPara abastecer totalmente seu tanque que possui %.2f litros serao gastos R$ %.2f Reais.\n", tanque, capacidade);
      printf("\nPara abastecer somente %.2f litros serao gastos R$ %.2f Reais.\n", litro, litros);
     }else if(combustivel=='d')
      {
       precoComb=3.00;
       capacidade=tanque*precoComb;
       litros=litro*precoComb;
       printf("\nPara abastecer totalmente seu tanque que possui %.2f litros serao gastos R$ %.2f Reais.\n", tanque, capacidade);
       printf("\nPara abastecer somente %.2f litros serao gastos R$ %.2f Reais.\n", litro, litros);
      }
    }
    return 0;
}
