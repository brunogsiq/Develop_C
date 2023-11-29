#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Fa�a um algoritmo que simule um lan�amento de dados.
Lance o dado 100 vezes e armazene os resultados em um vetor.
Depois, mostre quantas vezes saiu cada valor.

Use a fun��o rand() para carregar os n�meros aleat�rios.
Para isso inclua biblioteca stdlib (#include <stdlib.h>).

Para gerar n�meros de 1 a 6 use: rand()%6+1
Exemplo: vetor[x] = rand()%6+1;

Use o comando srand(time(NULL)) da biblioteca #include <time.h>,
antes de usar rand(), para inicializar o gerador de n�meros aleat�rios
*/


int main(void) {

  srand(time(NULL));
  int v[25] = {rand()%9+1};

  for(int x = 0; x < 25 ; x++){
    int y = {rand()%9+1};
    v[y]++;
  }
  for (int x = 0; x < 25; x++){
    printf("%d: %d\n", x+1, v[x]);
  }

  return 0;
}
