#include <stdio.h>
#include <stdlib.h>

/*Fa�a uma algoritmo que leia o ano de nascimento de uma pessoa
  mostre uma mensagem caso ela tenha nascido na d�cada de 90 (1990 at� 1999 inclusive)

*/

int main()
{
    int anoNasc;
    printf("Entre com o Ano de Nascimento: ");
    scanf("%d", &anoNasc);
    if(anoNasc>=1990 && anoNasc<=1999){
        printf("Olha que Legal, Nascido na Decada de 90");
    }else{
        printf("Das Duas Uma, NOVO OU VELHO D++++");
    }

    return 0;
}
