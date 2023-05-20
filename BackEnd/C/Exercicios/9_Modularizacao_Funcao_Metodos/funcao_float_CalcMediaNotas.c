#include <stdio.h>
#include <stdlib.h>

///Função que recebe 3 valores reais e retorna a média
float calculaMedia(float v1, float v2, float v3){
    float media;

    media = (v1+v2+v3)/3;

    return media;
}

int main() {
    float a, b, c;

    printf("Entre com 3 numeros reais: ");
    scanf("%f%f%f",&a,&b,&c);

    ///A chamada da função é feita dentro do printf, para que seja impresso o retorno
    printf("A media sera %.2f",calculaMedia(a,b,c));

    return 0;

}


