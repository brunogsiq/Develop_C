#include <stdio.h>
#include <stdlib.h>

/*
Construa um algoritmo para encontrar o maior
e o menor elemento de um vetor de tamanho N. (Atenção: N deve ser informado no início do algoritmo)
*/
int main() {
      int N;
      printf("informa o valor de quantos registros deseja: ");
      scanf("%d", &N);
      float vetor[N], maior, menor;

    for (int i = 0; i < N; i++) {
        printf(" Vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];


    for (int i = 0; i < N; i++)
    {
        if (vetor[i] > maior)
        {
          maior = vetor[i];
        }
            if (vetor[i] < menor)
            {
              menor = vetor[i];
            }
    }

  printf("Maior: %.2f\n", maior);
  printf("Menor: %.2f", menor);

    return 0;
}
