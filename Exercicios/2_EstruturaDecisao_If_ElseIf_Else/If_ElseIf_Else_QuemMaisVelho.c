#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa para ler o ano de nascimento de duas pessoas.
Ao final o programa deve dizer quem � o mais velho ou se t�m a mesma idade
*/
int main()
{
    int anoP, anoS;
    printf("Digite o ANO de nascimento da Primeira Pessoa: ");
    scanf("%d", &anoP);
    printf("\nDigite o ANO de nascimento da Segunda Pessoa: ");
    scanf("%d", &anoS);

    if(anoP == anoS)
    {
     printf("\nAmbos Nasceram no mesmo ano.\n");
    }else if(anoP<=anoS)
     {
      printf("\n\nA Primeira Pessoa eh mais Velha, nasceu Primeiro.\n");
     }else if(anoP>=anoS)
      {
       printf("\n\nA Primeira Pessoa eh mais Nova, nasceu Depois.\n");
      }

    return 0;
}
