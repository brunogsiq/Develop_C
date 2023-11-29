#include <stdio.h>
#include <stdlib.h>

/*
9. Ordem crescente
Faça um algoritmo para ler três números informados pelo usuário e imprimi-los em ordem crescente.

*/

int main()
{
    int a, b, c;
    printf("Digite 3 numeros, independente de valores:\n");
    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);

  if(a < b && b < c){
    printf("%d %d %d", a, b, c);
  }
  else if(a < c && c < b){
    printf("%d %d %d", a, c, b);
  }
  else if(b < a && b < c){
    printf("%d %d %d", b, a, c);
  }
  else if(b < c && c < a){
    printf("%d %d %d", b, c, a);
  }
  else if(c < a && a < b){
    printf("%d %d %d", c, a, b);
  }
  else{
    printf("%d %d %d", c, b, a);
  }

    return 0;
}
