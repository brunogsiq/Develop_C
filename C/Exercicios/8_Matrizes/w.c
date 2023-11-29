#include <stdio.h>
#include <stdlib.h>

/*
Construa um algoritmo que leia uma matriz 4 x 4 e escreva a localização (linha e coluna) do maior e menor valor lido.

*/

int main(void) {
  float M[4][4];

  //cadastra valores
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      //scanf("%f", &M[i][j]);
      M[i][j]=rand()%10;
    }
  }

  //calcula maior e menor valor
  float maior = M[0][0];
  float menor = M[0][0];
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (M[i][j] > maior){
        maior = M[i][j];
      }
      if (M[i][j] < menor){
        menor = M[i][j];
      }
    }
  }

  //exibe a(s) posição(ões) do maior valor
  printf("Maior: %f\n", maior);
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (M[i][j] == maior){
        printf("Posição: %d:%d\n", i,j);
      }
    }
  }

  //exibe a(s) posição(ões) do menor valor
  printf("Menor: %f\n", menor);
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (M[i][j] == menor){
        //printf("Posição: %d:%d\n", i,j);
      }
    }
  }

  //imprime matriz
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      printf("%5.2f", M[i][j]);
    }
    printf("\n");
  }

  return 0;
}
