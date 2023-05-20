#include <stdio.h>
#include <stdlib.h>

/*
4) Faça um algoritmo que leia dois números inteiros a e b e
calcule e exiba o máximo divisor comum de a e b, mdc(a,b),
e o mínimo múltiplo comum de a e b, mmc(a,b).

Dica 1: Use o algoritmo de Euclides para calcular mdc(a,b).
http://clubes.obmep.org.br/blog/salade-estudos-algoritmo-de-euclides-para-determinacao-de-mdc/
Dica 2: Use a propriedade a seguir para calcular o mmc(a,b):
Propriedade: mmc(a,b) x mdc(a,b) = a x b.
*/

int main()
{
    int dividendo, divisor, resto, numPrim, numSeg, mdcomum, mmcomum;
    printf("DIGITE O NUMERO INTEIRO A (DIVIDENDO): ");
    scanf("%d", &dividendo);
    printf("\n\nDIGITE O NUMERO INTEIRO B (DIVISOR): ");
    scanf("%d", &divisor);

    numPrim = dividendo;
    numSeg = divisor;

/*MDC*/ do{
           mdcomum = dividendo / divisor;
           resto = dividendo % divisor;
           dividendo = divisor;
           divisor = resto;
        }while (resto != 0);

/*MMC*/ mmcomum = numPrim * numSeg / dividendo;

    printf("\n\nMAXIMO DIVISOR COMUM EH IGUAL : %d .\n\n", dividendo);
    printf("\n\nMINIMO MULTIPLO COMUM EH IGUAL : %d .\n\n", mmcomum);

    return 0;
}

