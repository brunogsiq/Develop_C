#include <stdio.h>
#include <stdlib.h>
/*
3. Dia �til ou fim de semana
Fa�a um algoritmo para ler o n�mero referente a um dia da semana
 e imprimir a mensagem "Dia �til" ou "fim de semana",

 considerando que 1 = domingo, 2 = segunda-feira, ..., 7 = s�bado.
 Caso o n�mero n�o corresponda a um dia da semana,
 o algoritmo deve mostrar a mensagem "N�mero n�o corresponde a dia da semana"
*/
int main()
{
    int diaNum;

    printf("Digite o numero corresponde ao dia:");
    scanf("%d", &diaNum);

    if(diaNum==1)
    {
     printf("Domingo, EH FOLGA MISERARVI");
    }else if(diaNum==2)
          {
           printf("Segunda-Feira, SIM eh dia util");
          }else if(diaNum==3)
                {
                 printf("Terca-Feira, SIM eh dia util");
                }else if(diaNum==4)
                      {
                       printf("Quarta-Feira, SIM eh dia util");
                      }else if(diaNum==5)
                            {
                             printf("Quinta-Feira, SIM eh dia util");
                            }else if(diaNum==6)
                                  {
                                   printf("Sexta-Feira, SIM eh dia util");
                                  }else if(diaNum==7)
                                      {
                                       printf("Sabado, EH FOLGA MISERARVI");
                                      }else
                                           {
                                            printf("Numero INVALIDO, NAO corresponde a nenhum dia da semana");
                                           }


    return 0;
}
