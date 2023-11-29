#include <stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo que leia o raio de um círculo e mostre na tela a sua área e o seu perímetro.

Use as fórmulas: A = πr² e P = 2πr. */

int main()
{
    float raio, pi, area, perimetro;
    printf("Entre com o Raio para calcular:\n");
        scanf("%f", &raio);
            pi= 3.14159;
            area = pi*(pow(raio,2));
            perimetro = 2*pi*raio;
    printf("De acordo com os dados fornecidos seu calculo eh:\n%.2f :Area\n%.2f :Perimetro.", area, perimetro);
    return 0;
}
