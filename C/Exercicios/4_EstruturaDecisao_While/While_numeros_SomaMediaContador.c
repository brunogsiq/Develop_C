#include <stdio.h>
#include <stdlib.h>

/* Ler v�rios n�meros at� o usu�rio digitar 0. No final mostre
quantos n�meros foram lidos e a m�dia desses n�meros*/

int main()
{
    float num, media, soma = 0;
    int cont = 0;
    scanf("%f", &num);
    while (num != 0){
           cont = cont + 1;
           soma = soma + num;
           scanf("%f", &num);
    }
    printf("Qtde numeros: %d \n", cont);
    media = soma/cont;
    printf("Media: %.2f \n", media);
    return 0;
}
