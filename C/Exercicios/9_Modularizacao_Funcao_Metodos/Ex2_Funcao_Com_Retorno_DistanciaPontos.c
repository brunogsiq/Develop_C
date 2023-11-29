#include <stdio.h>
#include <stdlib.h>

float distancia(int x1, int y1, int x2, int y2){

    float d;

    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    return d;
}








int main(){
    int x1,y1,x2,y2,x3,y3;

    printf("Digite 3 vertices de um triangulo\n");
    printf("Digite o ponto 1: ");
    scanf("%d%d",&x1,&y1);
    printf("Digite o ponto 2: ");
    scanf("%d%d",&x2,&y2);
    printf("Digite o ponto 3: ");
    scanf("%d%d",&x3,&y3);

    float ladoA,ladoB,ladoC;

    ladoA = distancia(x1,y1,x2,y2);
    ladoB = distancia(x2,y2,x3,y3);
    ladoC = distancia(x3,y3,x1,y1);

    float perimetro = ladoA+ladoB+ladoC;

    printf("O perimetro eh %0.2f",perimetro);

    return 0;
}
