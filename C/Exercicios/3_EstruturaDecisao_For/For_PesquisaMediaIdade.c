#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

/*
14. Pesquisa idade com N pessoas
Faça um algoritmo que leia um valor inteiro N,
a qual corresponde a quantidade de idades que serão lidas em seguida.
Após a leitura das idades mostre:
a) média das idades
b) o percentual de pessoas com menos de 18 anos
c) o percentual de pessoas com idade de 18 a 22 anos.
d) o percentual de pessoas com mais de 22 anos.
*/

int main(void) {
  int N, idade, soma = 0, cont18 = 0, cont18_22 = 0, cont22 = 0;
  float media, perc18, perc18_22, perc22;
  printf("Digite a quantidade de pessoas: ");
  scanf("%d", &N);

  for (int x = 0; x < N; x++){
    printf("Digite a idade: ");
    scanf("%d", &idade);
    soma = soma + idade;


    if (idade < 18){ //conta qtd pessoas menos de 18 anos
      cont18++;
    }
    else if (idade <= 22){ //conta qtd pessoas de 18 anos a 22 anos
      cont18_22++;
    }
    else{ //conta qtd pessoas mais de 22 anos
      cont22++;
    }

  }

  media = (float)soma/N;
  printf("Média idade: %.2f\n", media);

  perc18 = (float)cont18/N*100;
  perc18_22 = (float)cont18_22/N*100;
  perc22 = (float)cont22/N*100;

  printf("Porcentagem menos 18 anos: %.2f %%\n", perc18);
  printf("Porcentagem de 18 a 22 anos: %.2f %%\n", perc18_22);
  printf("Porcentagem mais de 22 anos: %.2f %%\n", perc22);

  return 0;
}

