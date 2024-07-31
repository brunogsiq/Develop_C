#include <stdio.h>
#include <stdlib.h>

/* algoritmo que leia 10 números e que apresente
ao final a média dos mesmos*/

int main()
{
    printf("DIGITE 10 NUMEROS INTEIROS");
    float num, media, soma = 0;
    for (int x = 1 ; x <= 10; x++){
    scanf("%f", &num);
    soma = soma + num;
    }
    media = soma/10;
    printf("Media: %f \n", media);
    return 0;
}
