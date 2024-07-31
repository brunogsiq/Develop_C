#include <stdio.h>
#include <stdlib.h>
/*
4. Linha de ônibus
Faça um algoritmo para ler o código de uma linha de ônibus:
 de Gaspar e apresentar o nome da linha, de acordo com a lista abaixo.
 Se o código informado não estiver na lista informe a mensagem "Código inexistente".
1 – Bela Vista
2 – Figueira
3 – Sta Terezinha
*/
int main()
{
    int linha;
    printf("Digite o Onibus que deseja pegar: ");
    scanf("%d", &linha);

    if(linha==1)
    {
     printf("Linha: Bela Vista");
    }else if(linha==2)
           {
            printf("Linha: Figueira");
           }else if(linha==3)
                  {
                   printf("Linha: Sta Tersinha");
                  }else
                      {
                       printf("Linha: INVALIDA");
                      }

    return 0;
}
