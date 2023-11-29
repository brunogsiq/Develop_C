#include <stdio.h>
#include <stdlib.h>
/*
8. Diário de classe
Construa um algoritmo que permita cadastrar o nome e as notas obtidas em 3 provas
pelos 30 alunos de uma turma de Programação.
O cadastro deve ser feito por aluno e na seguinte ordem:
nome, nota1, nota2 e nota3 .
Em seguida, o algoritmo deve gerar um vetor com a média das notas de cada aluno. Finalmente,
o algoritmo deve informar o nome, as 3 notas e a média de cada aluno.
Exemplo de Saída:
Nome  N1  N2 N3  Media
Téu     5    6    7    6.0
Bem    7   6     4    5.7
*/

int main() {
  int n = 30;
  float notas1[n], notas2[n], notas3[n], medias[n];
  char nomes[n][10];
  //cadastrando nomes e notas
  for (int x = 0; x < n; x++){
    printf("Digite o nome do aluno %d: ", x+1);
    scanf("%s", nomes[x]);
    printf("Digite a nota 1 do aluno %s: ", nomes[x]);
    scanf("%f", &notas1[x]);
    printf("Digite a nota 2 do aluno %s: ", nomes[x]);
    scanf("%f", &notas2[x]);
    printf("Digite a nota 3 do aluno %s: ", nomes[x]);
    scanf("%f", &notas3[x]);
  }

  //calculando a média
  for (int x = 0; x < n; x++){
    medias[x] = (notas1[x]+notas2[x]+notas3[x])/3;
  }
  //imprimindo nomes e notas
  printf("Nome :      Nota1 Nota2 Nota3 MEdia\n");
   for (int x = 0; x < n; x++){
    printf("%-10s %-5.2f %-5.2f %-5.2f %-5.2f\n", nomes[x], notas1[x], notas2[x], notas3[x], medias[x]);
  }

  return 0;
}
