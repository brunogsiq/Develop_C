#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Faça um algoritmo que preencha uma matriz 10x10 com números aleatórios de 1 a 10 e imprima a matriz no formato de tabela.
Após isso, mostre a soma dos elementos acima da diagonal principal.

Use a função rand() para carregar números aleatórios.
Para carregar números de 1 a 10 use: rand()%10+1
Exemplo: m[i][j] = rand()%10+1

Use o comando srand(time(NULL)) da biblioteca #include <time.h>, antes de usar rand(), para inicializar o gerador de números aleatórios

*/
int main(void) {
  int M[10][10];
  //cadastra valores
  srand(time(NULL));
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      M[i][j]=rand()%10+1;
    }
  }

  //imprime matriz
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      printf("%3d", M[i][j]);
    }
    printf("\n");
  }

  //calcula soma acima diagonal principal
  int soma = 0;
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      if (i < j){
        soma = soma + M[i][j];
      }
    }
  }
  printf("Soma elementos acima da diagonal principal: %d", soma);

  return 0;
}
