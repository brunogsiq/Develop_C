#include <stdio.h>
#include <stdlib.h>

/* Ler vários números até o usuário digitar 0. No final mostre
quantos números foram lidos e a média desses números*/

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
