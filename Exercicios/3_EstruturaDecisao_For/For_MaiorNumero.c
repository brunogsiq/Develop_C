#include <stdio.h>
#include <stdlib.h>

/*
9.
Faça um algoritmo que leia 100 números inteiros nãonegativos(maior ou igual a zero) e que apresente ao final o maior de todos.
*/

int main()
{
    int numX, numMaior;

    for (int x=0; x<100; x++){
        printf("Digite o %d numero: ", x+1);
        scanf("%d", &numX);

        if(numX>numMaior)
        {
            numMaior = numX;
        }
    }
    printf("O maior numero eh: %d .", numMaior );

    return 0;
}
