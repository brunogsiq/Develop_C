#include <stdio.h>
#include <stdlib.h>
/*
O setor de recursos humanos de uma empresa fez uma seleção para auxiliar de escritório.
 disputada por 30 candidatos. Cada candidato fez
uma prova de múltipla escolha de 100 questões, acertando uma certa
quantidade de respostas.
Faça um algoritmo que leia, para cada candidato, o nome e a
quantidade de respostas certas. Ao final exiba:
a) A quantidade de candidatos que acertaram mais do que 50
questões.
b) O nome e a quantidade de acertos do candidato que acertou mais
questões. Ignore o caso de empates.
*/


int main(void) {
  char nomeCandidato[10];
  int numeroAcertos;
  int qtdMais50Acertos = 0;
  int maiorAcerto = 0;
  char nomeCadidatoMaiorAcerto[10];

    printf("DIGITE O NOME DO CANDIDATO E O NUMERO DE ACERTOS: \n");
    for (int x = 0; x < 5; x++)
    {
    scanf("%s", nomeCandidato);
    scanf("%d", &numeroAcertos);

        //Conta  quantas pessoas acertaram mais de 50 questões
        if(numeroAcertos > 50)
        {
          qtdMais50Acertos++; //qtdMais50Acertos = qtdMais50Acertos + 1
        }

        //Encontra o maior número de acertos
        if (numeroAcertos > maiorAcerto)
        {
          maiorAcerto = numeroAcertos; //90
          strcpy(nomeCadidatoMaiorAcerto, nomeCandidato);
        }

    }

  printf("Quantidade de pessoas que acertaram mais de 50 questões: %d\n", qtdMais50Acertos);
  printf("Nome candidato com mais acertos: %s\n", nomeCadidatoMaiorAcerto);
  printf("Maior número de acertos: %d\n", maiorAcerto);

  return 0;
}
