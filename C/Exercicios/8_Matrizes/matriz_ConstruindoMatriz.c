#include <stdio.h>
#include <stdlib.h>

/*Crie um algoritmo que leia os preços de 15 produtos da cesta básica, anotados em 3 lojas diferentes, em uma matriz.
Ao final, exibir uma listagem descrevendo a(s) loja(s) que contém o menor preço para cada produto.*/


int main(void) {
  float precos[15][3];
  //cadastra preços
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 3; j++){
      //printf("Pos %d,%d: ", i,j);
      //scanf("%f", &precos[i][j]);
      precos[i][j]=rand()%10;
    }
  }

  //imprime matriz de preços
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 3; j++){
      printf("%5.2f", precos[i][j]);
    }
    printf("\n");
  }

  //exibir lojas com menor preço
  for (int i = 0; i < 15; i++){
    //produto com menor preco
    float menor = precos[i][0];
    for (int j = 0; j < 3;j++){
      if (precos[i][j] < menor){
        menor = precos[i][j];
      }
    }
    printf("Produto %d\n", i);
    printf("Menor preço: %f\n", menor);
    //exibe loja(s) com menor preco
    for (int j = 0; j < 3;j++){
      if (precos[i][j] == menor){
        printf("L%d\n", j);
      }
    }

  }

  return 0;
}
