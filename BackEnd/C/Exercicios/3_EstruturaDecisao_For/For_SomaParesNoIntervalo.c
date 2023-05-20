#include <stdio.h>
#include <stdlib.h>

/*
Sem usar o comando SE, calcule a soma de todos os números pares entre 1 e 1000.
*/

int main(void) {
  int N, soma = 0;

  scanf("%d", &N); //N PARA PEDIR UM VALOR E SOMAR DE 0 A ESTE - PODERIA SER 1000

  for (int x = 2; x <= N; x+=2){ //EM N DEVERIA SER 1000 DE ACORDO COM EXERCÍCIO
    soma = soma + x;
  }

  printf("%d", soma);
  return 0;
}
