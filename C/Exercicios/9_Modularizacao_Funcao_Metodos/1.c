#include <stdio.h>
#include <stdlib.h>

//procedimento somar
void somar(int num1, int num2){
    int total;
    total = num1 + num2;
    printf("Soma = %d", total);
    return;
}

int main()
{
    int num1, num2;
    printf("DIGITE VALOR 1: ");
    scanf("%d", &num1);
    printf("DIGITE VALOR 1: ");
    scanf("%d", &num2);

    somar(num1, num2);
    return 0;
}
