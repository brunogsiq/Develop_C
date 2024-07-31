#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia 100 números inteiros e que apresente ao final o maior e o menor de todos.*/

int main()
{
    int numX, numMenor, numMaior;

    for(int x=0; x<100; x++)
    {
        printf("Digite o numero %d: ", x+1);
        scanf("%d", &numX);

    if(numX>numMaior)
    {
        numMaior = numX;
    }
    else if(numX<numMenor)
        {
            numMenor=numX;
        }
    }

    printf("O Maior numero eh %d enquanto o Menor eh: %d .", numMaior, numMenor);

    return 0;
}
