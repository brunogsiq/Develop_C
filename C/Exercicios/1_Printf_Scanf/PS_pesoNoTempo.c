#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Decomposi��o de uma subst�ncia
Uma certa subst�ncia se decomp�e segundo a lei:

Q(t) =

t indica o tempo em minutos e Q(t) indica a quantidade da subst�ncia, em gramas, no instante t.

Crie um algoritmo que leia um valor t e determine a massa dessa subst�ncia ap�s t minutos*/

int main()
{
    int tempo1, tempo2;
    float quantidade;

    printf("Digite o Valor em Gramas da Substancia desejada: ");
    scanf("%f", &quantidade);
    printf("Digite o Valor em Segundos do tempo Inicial desejado: ");
    scanf("%d", &tempo1);
    printf("Digite o Valor em Segundos do tempo Final desejado: ");
    scanf("%d", &tempo2);
    quantidade = 2048*(pow(2,-0.5*tempo2));

    printf("A quantidade de massa em gramas no tempo final eh %.2f", quantidade );
    return 0;
}
