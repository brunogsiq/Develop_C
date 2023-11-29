#include <stdio.h>
#include <stdlib.h>
/*
Construa um algoritmo que permita cadastrar o nome e as notas obtidas em 3 provas pelos 20 alunos de uma turma de Programação.
 Em seguida, o algoritmo deve calcular a média das notas de cada aluno e armazená-las.
 Finalmente, o algoritmo deve informar o nome, as 3 notas e a média de cada aluno.

Observação: as notas e as médias devem ficar na mesma matriz.

*/
int main(void) {
  float notas[20][4];
  char nomes[20][10];
  //cadastra nomes e notas
  for (int i = 0; i < 20; i++){
      scanf("%s", nomes[i]);
    for (int j = 0; j < 3; j++){
      //scanf("%f", &notas[i][j]);
      notas[i][j]=rand()%10+1;
    }
  }

  //calcula Média
  for (int i = 0; i < 20; i++){
    float soma = 0;
    for (int j = 0; j < 3; j++){
      soma = soma + notas[i][j];
    }
    notas[i][3] = soma/3;
  }

  //imprime matriz
  printf("Nome      N1   N2   N3   Média\n");
  for (int i = 0; i < 20; i++){
    printf("%-10s", nomes[i]);
    for (int j = 0; j < 4; j++){
      printf("%-5.2f", notas[i][j]);
    }
    printf("\n");
  }

  return 0;
}
