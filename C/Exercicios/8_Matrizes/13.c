#include <stdio.h>
#include <stdlib.h>
/*
13. Soma elementos da matriz
Construa um algoritmo que permita carregar uma matriz de 4 X 5. No final, deve ser impresso:
A matriz no formato de tabela
A soma de todos os elementos da matriz
A soma de cada linha
A soma de cada coluna
*/

int main(void) {
  float M[4][5];
  //cadastra valores
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 5; j++){
      //scanf("%f", &M[i][j]);
      M[i][j]=rand()%10;
    }
  }

   //imprime matriz
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 5; j++){
      printf("%5.2f", M[i][j]);
    }
    printf("\n");
  }

  //soma de todos os elementos matriz
  float soma = 0;
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 5; j++){
      soma = soma + M[i][j];
    }
  }
  printf("Soma geral: %f\n", soma);

  //soma de cada linha
  for (int i = 0; i < 4; i++){
    float somaL = 0;
    for (int j = 0; j < 5; j++){
      somaL = somaL + M[i][j];
    }
    printf("Soma L%d: %f\n", i, somaL);
  }
  //soma de cada linha
  for (int j = 0; j < 5; j++){
    float somaC = 0;
    for (int i = 0; i < 4; i++){
      somaC = somaC + M[i][j];
    }
    printf("Soma C%d: %f\n", j, somaC);
  }


  return 0;
}
