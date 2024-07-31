#include <stdio.h>
#include <stdlib.h>

/*
13. Peso médio e altura média
Faça um algoritmo que leia o peso e a altura de um grupo de 1000 pessoas e informe o peso e a altura médio desse grupo
*/

int main()
{
    float altura, totalAltura, mediaAltura;
    float peso, totalPeso, mediaPeso;
    float somaA=0, somaP=0;

    for(int x=0; x<1000; x++)
    {
        printf("Digite a altura da %d Pessoa em centimentro: ", x+1);
        scanf("%f", &altura);
        somaA = somaA + altura;

        printf("Digite o peso da %d Pessoa em quilos: ", x+1);
        scanf("%f", &peso);
        somaP = somaP + peso;

     totalAltura = somaA;
     totalPeso = somaA;

     mediaAltura = totalAltura/1000;
     mediaPeso = totalPeso/1000;

    }

    printf("A altura media eh %.2f e o Peso medio eh %.2f", mediaAltura, mediaPeso);

    return 0;
}
