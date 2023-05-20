#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    float numVirg;
    char letra[30];
    printf("Digite Numero Inteiro: ");
    scanf("%d", &numero);
    printf("Digite Numero Com Virgula: ");
    scanf("%f", &numVirg);
    printf("Digite Nome: ");
    scanf(" %s", &letra);
    printf("\nImprima %d e %.f e %s : ", numero, numVirg, letra);

    return 0;
}
