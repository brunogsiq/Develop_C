#include <stdio.h>
#include <stdlib.h>


int main(){
    int anos, meses, dias;

    printf("Quantos dias de vida tem a pessoa que deseja calcular? ");
    scanf("%d", &dias);

    anos = dias/365;
    dias = dias % 365;
    meses = dias/30;
    dias = dias % 30;

    printf("Sua idade eh correspondente em %d anos, %d meses e %d dias. \n", anos, meses, dias);

    return 0;
}
