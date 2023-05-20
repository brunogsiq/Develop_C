#include <stdio.h>
#include <stdlib.h>

/*
22. Tabuada da multiplicação
Faça um algoritmo que leia um número e que exiba a tabuada de multiplicação do mesmo.
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
