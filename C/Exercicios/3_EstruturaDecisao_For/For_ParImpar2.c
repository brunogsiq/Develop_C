#include <stdio.h>
#include <stdlib.h>

/*
12. Par ou ímpar
Faça um algoritmo que leia 50 números inteiros e informe se cada um deles é par ou ímpar
*/

int main()
{
    int numeroX, numPar, numImpar;

    for (int x=0; x<50; x++)
    {
        printf("Digite o %d numero: ", x+1);
        scanf("%d", &numeroX);

        if(numeroX%2==0)
        {

           printf("NUMERO PAR\n");
         }
         else
        {
              printf("NUMERO IMPAR\n");
        }
    }

    return 0;
}
