#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, difrc;
    printf("Escreva o primeiro numero\n");
    scanf("%d", &num1);
    printf("Escreva o segundo numero\n");
    scanf("%d", &num2);
    difrc = num1 - num2;
    printf("\nA Diferenca entre os numeros decimais sao de %d numeros ", difrc);
    return 0;
}
