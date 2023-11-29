#include <stdio.h>
#include <stdlib.h>

float calculaDiametro(float raio){
    return 2*raio;
}

float calculaCirc(float raio){
    return 2*3.14159*raio;
}

float calculaArea(float raio){
    return pow(raio,2)*3.14159;
}

void imprimeMedidas(float raio){
    printf("Diametro: %.2f\n",calculaDiametro(raio));
    printf("Circunferencia: %.2f\n",calculaCirc(raio));
    printf("Area: %.2f\n",calculaArea(raio));
}

int main() {
    float raio1, raio2;
    printf("Digite o raio do circulo 1: ");
    scanf("%f",&raio1);
    printf("Digite o raio do circulo 2: ");
    scanf("%f",&raio2);

    printf("\nInformacoes do circulo 1\n");
    imprimeMedidas(raio1);
    printf("\nInformacoes do circulo 2\n");
    imprimeMedidas(raio2);

    return 0;
}


