#include <stdio.h>
#include <stdlib.h>

/*
2) Escreva um algoritmo que leia uma temperatura em graus
Celsius e mostre a temperatura em graus Fahrenheit.
Para isso, construa um m�dulo que
 receba como par�metro uma temperatura em graus Celsius
  e calcule e imprima a temperatura correspondente em graus Fahrenheit.

F�rmula para convers�o: Fahrenheit = 1.8*Celsius + 32
*/

void conversaoGraus ( float grauCelsius )
{
    float fahrenheit;
    fahrenheit = 1.8 * grauCelsius + 32;
    printf("O RESULTADO EH: %.2f", fahrenheit);
}

int main()
{
    float celsiusGrau, resultado;

    printf("DIGITE A TEMPERATURA EM GRAUS: ");
    scanf("%f", &celsiusGrau );

    conversaoGraus ( celsiusGrau );
    return 1;
}
