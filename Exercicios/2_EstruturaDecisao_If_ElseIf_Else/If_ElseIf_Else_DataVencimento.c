#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um algoritmo que leia um n�mero de matr�cula de uma sociedade:
 informe a data de pagamento da mensalidade de acordo com a a tabela abaixo.
 O n�mero de matr�cula deve ser armazenado em uma vari�vel inteira.
�Final 0, 1 ou 2 � pagamento at� 10/fevereiro
�Final 3, 4 ou 5 � pagamento at� 10/abril
�Final 6 ou 7 � pagamento at� 10/junho
�Outro final � pagamento at� 10/agosto
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
