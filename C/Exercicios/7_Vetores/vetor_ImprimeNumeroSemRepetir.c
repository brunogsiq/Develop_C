#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um algoritmo que leia N n�meros inteiros.�
N deve ser informado no in�cio do algoritmo.
Ap�s isso, imprima os n�meros lidos sem exibir os n�meros repetidos.

*/
int main(void) {

  int n;
  scanf("%d", &n);

  int v[n];
  for (int x = 0; x < n; x++){
    scanf("%d", &v[x]);
  }

  //imprime sem repeti��o
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
