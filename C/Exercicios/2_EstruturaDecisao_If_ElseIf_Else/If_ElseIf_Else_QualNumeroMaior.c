#include <stdio.h>
#include <stdlib.h>
/*
6. Maior, menor ou iguais
Fa�a um algoritmo para ler dois n�meros e dizer qual � o maior e qual � o menor ou se s�o iguais.
*/
int main()
{
    float numP, numS;
    printf("Digite o Primeiro Numero: ");
    scanf("%f", &numP);
    printf("Digite o Primeiro Numero: ");
    scanf("%f", &numS);

    if(numP==numS)
    {
     printf("O Primeiro numero eh IGUAL ao Segundo numero.");
    }else if(numP>numS)
    {
     printf("O Primeiro numero eh MAIOR que o Segundo numero.");
    }else if(numP<numS)
    {
     printf("O Primeiro numero eh MENOR que o Segundo numero.");
    }
    return 0;
}
