#include <stdio.h>
#include <stdlib.h>

/*
Crie um algoritmo que leia os preços de 15 produtos da cesta básica,
anotados em 3 lojas diferentes, em uma matriz.
Ao final, exibir uma listagem com o preço médio de cada produto.
*/
int main(void) {
  float precos[15][4];
  //cadastra precos
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 3; j++){
      //scanf("%f", &precos[i][j]);
      precos[i][j]=rand()%10;
    }
  }

  //calcula preço médio
  for (int i = 0; i < 15; i++){
    float soma = 0;
    for (int j = 0; j < 3; j++){
      soma = soma + precos[i][j];
    }
    precos[i][3] = soma/3;
  }

   //imprime matriz precos
   printf("L1   L2   L3   Média\n");
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 4; j++){
      printf("%-5.2f", precos[i][j]);
    }
    printf("\n");
  }


  return 0;
}
