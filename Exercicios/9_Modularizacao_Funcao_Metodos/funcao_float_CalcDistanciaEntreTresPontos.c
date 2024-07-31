#include <stdio.h>
#include <stdlib.h>

///Função que retorna e distancia entre dois pontos
float calculaDistancia(float x1, float y1, float x2, float y2){

    ///return já retorna o resultado do cálculo de distância
    return sqrt(pow(x2-x1,2) + pow(y2-y1,2));

}

int main() {
    float x1,x2,x3,y1,y2,y3;

    printf("Vamos calcular o perimetro de um triangulo de vertices P1, P2 e P3\n");
    printf("Informe as coordenadas do vertice P1: ");
    scanf("%f%f",&x1,&y1);
    printf("Informe as coordenadas do vertice P2: ");
    scanf("%f%f",&x2,&y2);
    printf("Informe as coordenadas do vertice P3: ");
    scanf("%f%f",&x3,&y3);

    float ladoA, ladoB, ladoC;

    ///Vamos chamar a função para cada par de vértices, passando entradas diferentes
    ladoA = calculaDistancia(x1,y1,x2,y2);
    ladoB = calculaDistancia(x2,y2,x3,y3);
    ladoC = calculaDistancia(x3,y3,x1,y1);

    float perimetro = ladoA+ladoB+ladoC;

    printf("O perimetro do triangulo sera %.2f",perimetro);

    return 0;

}


