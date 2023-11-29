#include <stdio.h>
#include <stdlib.h>

//função somar
float somar(float num1, float num2)
{
    float total = num1 + num2;
    return total;
}

int main()
{
    float val1, val2, resultado;
    printf("Digite dois valores: \n");
    scanf("%f %f", &val1, &val2);
    resultado = somar(val1, val2);
    printf("Soma = %.2f", resultado);

    return 0;
}
