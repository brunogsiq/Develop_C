#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um algoritmo que leia 10 n�meros inteiros diferentes.
Se o usu�rio repetir um n�mero o algoritmo deve inform�-lo e solicitar que outro n�mero seja digtado.

*/
int main() {

    int v[10];

    for (int i = 0; i < 10; i++){
      scanf("%d", &v[i]);

      ///verifica n�mero repetido
      int flag = 0;
      for ( int j = 0; j < i; j++){
        if (v[i] == v[j]){
          flag = 1;
        }
      }

      if(flag == 1){
        printf("Numero repetido, digite outro\n");
        i = i - 1;
      }

    }

    for (int i = 0; i < 10; i++){
      printf("%5d", v[i]);
    }

    return 0;
}
