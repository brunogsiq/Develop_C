#include <stdio.h>
#include <stdlib.h>

/*
1) Escreva um algoritmo que leia uma temperatura em graus
Celsius e mostre a temperatura em graus Fahrenheit.

Para isso, construa um módulo que receba como parâmetro uma
 temperatura em graus Celsius
  e calcule e retorne a temperatura correspondente em graus Fahrenheit.
*/

float conversaoGraus ( float grauCelsius )
{
    float fahrenheit;
    fahrenheit = 1.8 * grauCelsius + 32;
    return ( fahrenheit );
}

int main()
{
    float celsiusGrau, resultado;

    printf("DIGITE A TEMPERATURA EM GRAUS: ");
    scanf("%f", &celsiusGrau );

    resultado = conversaoGraus ( celsiusGrau );
    printf("O RESULTADO EH: %.2f", resultado );

    return 0;
}
