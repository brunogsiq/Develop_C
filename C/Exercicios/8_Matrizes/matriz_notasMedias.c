#include <stdio.h>
#include <stdlib.h>
/*
Construa um algoritmo que permita cadastrar o nome e as notas obtidas em 3 provas pelos 20 alunos de uma turma de Programa��o.
 Em seguida, o algoritmo deve calcular a m�dia das notas de cada aluno e armazen�-las.
 Finalmente, o algoritmo deve informar o nome, as 3 notas e a m�dia de cada aluno.

Observa��o: as notas e as m�dias devem ficar na mesma matriz.

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

  //calcula M�dia
  for (int i = 0; i < 20; i++){
    float soma = 0;
    for (int j = 0; j < 3; j++){
      soma = soma + notas[i][j];
    }
    notas[i][3] = soma/3;
  }

  //imprime matriz
  printf("Nome      N1   N2   N3   M�dia\n");
  for (int i = 0; i < 20; i++){
    printf("%-10s", nomes[i]);
    for (int j = 0; j < 4; j++){
      printf("%-5.2f", notas[i][j]);
    }
    printf("\n");
  }

  return 0;
}
