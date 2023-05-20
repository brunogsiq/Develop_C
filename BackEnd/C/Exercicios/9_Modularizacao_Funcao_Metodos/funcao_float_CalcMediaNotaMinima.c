#include <stdio.h>
#include <stdlib.h>

float notaMinima(float p1, float p2){
    float media = 5.0;

    return (4.0*media - p1 - p2)/2;
}

int main(){

    float nota1, nota2;
    printf("CALCULO DE NOTA PARA APROVACAO\n");
    printf("Nota na 1a prova: ");
    scanf("%f",&nota1);
    printf("Nota na 2a prova: ");
    scanf("%f",&nota2);
    printf("Nota necessaria: %.2f",notaMinima(nota1,nota2));

    return 0;
}


