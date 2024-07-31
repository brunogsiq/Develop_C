#include <stdio.h>
#include <stdlib.h>

/*Crie um algoritmo que leia os pre�os de 15 produtos da cesta b�sica, anotados em 3 lojas diferentes, em uma matriz.
Ao final, exibir uma listagem descrevendo a(s) loja(s) que cont�m o menor pre�o para cada produto.*/


int main(void) {
  float precos[15][3];
  //cadastra pre�os
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 3; j++){
      //printf("Pos %d,%d: ", i,j);
      //scanf("%f", &precos[i][j]);
      precos[i][j]=rand()%10;
    }
  }

  //imprime matriz de pre�os
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 3; j++){
      printf("%5.2f", precos[i][j]);
    }
    printf("\n");
  }

  //exibir lojas com menor pre�o
  for (int i = 0; i < 15; i++){
    //produto com menor preco
    float menor = precos[i][0];
    for (int j = 0; j < 3;j++){
      if (precos[i][j] < menor){
        menor = precos[i][j];
      }
    }
    printf("Produto %d\n", i);
    printf("Menor pre�o: %f\n", menor);
    //exibe loja(s) com menor preco
    for (int j = 0; j < 3;j++){
      if (precos[i][j] == menor){
        printf("L%d\n", j);
      }
    }

  }

  return 0;
}
