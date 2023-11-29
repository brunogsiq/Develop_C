#include <stdio.h>
#include <stdlib.h>

/*7. Criando vetor
Construa um algoritmo que permita criar um vetor de inteiros de 20 posições:
    as 10 primeiras são números informados pelo usuário,
    e as 10 seguintes são os mesmos números em ordem inversa.
    Após isso, imprima o vetor obtido.*/

int main() {
    int v[20];
    //lê valores e armazena os 10 primeiro nas 10 últimas posições na ordem inversa de que foram lidos
    for (int i = 0; i < 10; i++){
      scanf("%d", &v[i]);
      v[19-i] = v[i];
    }
    //imprimindo
    for (int i = 0; i < 20; i++){
      printf("%5d", v[i]);
    }
    return 0;
}
