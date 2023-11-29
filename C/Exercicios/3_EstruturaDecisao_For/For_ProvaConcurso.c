#include <stdio.h>
#include <stdlib.h>
/*
O setor de recursos humanos de uma empresa fez uma sele��o para auxiliar de escrit�rio.
 disputada por 30 candidatos. Cada candidato fez
uma prova de m�ltipla escolha de 100 quest�es, acertando uma certa
quantidade de respostas.
Fa�a um algoritmo que leia, para cada candidato, o nome e a
quantidade de respostas certas. Ao final exiba:
a) A quantidade de candidatos que acertaram mais do que 50
quest�es.
b) O nome e a quantidade de acertos do candidato que acertou mais
quest�es. Ignore o caso de empates.
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

        //Conta  quantas pessoas acertaram mais de 50 quest�es
        if(numeroAcertos > 50)
        {
          qtdMais50Acertos++; //qtdMais50Acertos = qtdMais50Acertos + 1
        }

        //Encontra o maior n�mero de acertos
        if (numeroAcertos > maiorAcerto)
        {
          maiorAcerto = numeroAcertos; //90
          strcpy(nomeCadidatoMaiorAcerto, nomeCandidato);
        }

    }

  printf("Quantidade de pessoas que acertaram mais de 50 quest�es: %d\n", qtdMais50Acertos);
  printf("Nome candidato com mais acertos: %s\n", nomeCadidatoMaiorAcerto);
  printf("Maior n�mero de acertos: %d\n", maiorAcerto);

  return 0;
}
