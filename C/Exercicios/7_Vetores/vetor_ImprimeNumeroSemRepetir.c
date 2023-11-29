#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia N números inteiros. 
N deve ser informado no início do algoritmo.
Após isso, imprima os números lidos sem exibir os números repetidos.

*/
int main(void) {

  int n;
  scanf("%d", &n);

  int v[n];
  for (int x = 0; x < n; x++){
    scanf("%d", &v[x]);
  }

  //imprime sem repetição
  printf("%d ", v[0]);
  for (int x = 1; x < n; x++){
    int flag = 0;
    for(int y = 0; y < x; y++){
      if (v[x]==v[y]){
        flag = 1;
      }
    }
    if(!flag){
      printf("%d ", v[x]);
    }
  }

  return 0;
}
