#include <stdio.h>
#include <stdlib.h>

int main(){

    //OPÇÃO 1;
    float altura, diametro, raio, volume, pi;

    altura   = 0.12;
    diametro = 0.06;
    raio = 3;
    pi = 3.1416;

    volume = pi * pow(raio,2) * altura;
    printf("o volume de agua dentro deste copo eh =\n\n %f \n\n concorda?" , volume);

    //OPÇÃO 2;
    float altura2, diametro2, raio2, volume2;

    altura2 = 12;
    diametro2 = 6;
    raio2 = diametro2 / 2;

    volume2 = 3.14159 * pow(raio2,2) * altura2;
    printf("O volume eh %f", volume2);

    return 0;
}
