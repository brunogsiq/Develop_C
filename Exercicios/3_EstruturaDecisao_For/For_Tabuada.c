#include <stdio.h>
#include <stdlib.h>

/*
22. Tabuada da multiplica��o
Fa�a um algoritmo que leia um n�mero e que exiba a tabuada de multiplica��o do mesmo.
*/

int main()
{
    int numTab, numCalc;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d",&numTab);
    printf("Digite ate que numero deseja calcular : ");
    scanf("%d",&numCalc);
    for(int x=1; x<=numCalc; x++)
    printf("A Tabuada do %d fica: \n%d x %d = %d\n", numTab, numTab, x, (numTab*x));

    return 0;
}
