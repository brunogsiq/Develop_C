#include <stdio.h>
#include <stdlib.h>


/*Escreva um algoritmo que leia o valor da base e a altura de um ret�ngulo e mostre os resultados:

Per�metro = 2 * (altura + base)
�rea = base * altura*/


int main()
{
    int base, altura, perimetro, area;
    printf("Escreva na sequencia os dados de base e altura\n");
    scanf("%d %d", &base, &altura);
    perimetro = 2*(altura+base);
    area = base*altura;
    printf("Baseado nas informacoes digitadas sao: \n Base: %d.\n Altura: %d.\n Perimetro: %d.\n Area: %d.", base, altura, perimetro, area);
    return 0;
}
