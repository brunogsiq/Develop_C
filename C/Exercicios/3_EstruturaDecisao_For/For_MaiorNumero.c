#include <stdio.h>
#include <stdlib.h>

/*
9.
Fa�a um algoritmo que leia 100 n�meros inteiros n�onegativos(maior ou igual a zero) e que apresente ao final o maior de todos.
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
