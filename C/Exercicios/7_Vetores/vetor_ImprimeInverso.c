#include <stdio.h>
#include <stdlib.h>

/*7. Criando vetor
Construa um algoritmo que permita criar um vetor de inteiros de 20 posi��es:
    as 10 primeiras s�o n�meros informados pelo usu�rio,
    e as 10 seguintes s�o os mesmos n�meros em ordem inversa.
    Ap�s isso, imprima o vetor obtido.*/

int main() {
    int v[20];
    //l� valores e armazena os 10 primeiro nas 10 �ltimas posi��es na ordem inversa de que foram lidos
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
