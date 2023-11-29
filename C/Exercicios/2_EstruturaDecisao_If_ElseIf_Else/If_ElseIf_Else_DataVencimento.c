#include <stdio.h>
#include <stdlib.h>
/*
Faça um algoritmo que leia um número de matrícula de uma sociedade:
 informe a data de pagamento da mensalidade de acordo com a a tabela abaixo.
 O número de matrícula deve ser armazenado em uma variável inteira.
–Final 0, 1 ou 2 – pagamento até 10/fevereiro
–Final 3, 4 ou 5 – pagamento até 10/abril
–Final 6 ou 7 – pagamento até 10/junho
–Outro final – pagamento até 10/agosto
*/


int main()
{
    int numMatric, digFinal;
    printf("Digite o numero de matricula:");
    scanf("%d", &numMatric);

    digFinal=numMatric%10;

    if(digFinal<=2)
    {
     printf("pagamento ate 10/fevereiro.");
    }else if(digFinal<=5)
     {
      printf("pagamento ate 10/abril.");
     }else if(digFinal<=7)
      {
       printf("pagamento ate 10/junho.");
      }else if(digFinal<=9)
       {
        printf("pagamento ate 10/agosto");
       }

    return 0;
}
