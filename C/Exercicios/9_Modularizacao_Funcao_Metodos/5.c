#include <stdio.h>
#include <stdlib.h>

//prot�tipo imprimir cabe�alho
void imprimirCabecalho(void);

//prot�tipo m�dulo somar
float somar(float num1, float num2);

int main(){

    imprimirCabecalho();

    float val1, val2, resultado;
    scanf("%f %f", &val1, &val2);
    printf("Soma: %f", somar(val1, val2));

    return 0;
}

//m�dulo imprimir cabe�alho
void imprimirCabecalho(void){
printf("****************");
printf("****SOMA****");
printf("****************");
}

//m�dulo somar
float somar(float num1, float num2)
{
float total = num1 + num2;
return total;
}
