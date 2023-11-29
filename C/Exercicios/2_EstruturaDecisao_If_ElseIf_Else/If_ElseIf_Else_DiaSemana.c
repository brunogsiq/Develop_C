#include <stdio.h>
#include <stdlib.h>
/*
3. Dia útil ou fim de semana
Faça um algoritmo para ler o número referente a um dia da semana
 e imprimir a mensagem "Dia útil" ou "fim de semana",

 considerando que 1 = domingo, 2 = segunda-feira, ..., 7 = sábado.
 Caso o número não corresponda a um dia da semana,
 o algoritmo deve mostrar a mensagem "Número não corresponde a dia da semana"
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
