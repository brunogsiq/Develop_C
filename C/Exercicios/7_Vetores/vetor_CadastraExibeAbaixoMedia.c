#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia 10 valores reais em um vetor,
imprima a média destes valores
e mostre quantos valores estão abaixo da média.
*/

int main()
{
    float valores[10];
    float media=0, soma=0;
    int cont=0;
    //Lendo 10 valores
    for(int i=0; i<10; i++)
    {
       printf("Digite o valor na posicao %d:\n", i);
       scanf("%f", &valores[i]);
       soma = soma + valores[i];
    }
    for(int i = 0; i < 10; i++)
    {
        if(valores[i] < media)
        {
            cont++;
        }
    }

    media = soma/10;
    printf("O Valor da media: %.2f\n", media);
    printf("\nA Quantidade abaixo da media eh: %.2f", cont);

    return 0;
}
