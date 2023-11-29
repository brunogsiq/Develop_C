#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que leia dois valores inteiros, a e b, e calcule e
mostre a potência de ab. Não pode usar a função pow().*/

int main(){
  float base, exp, potencia = 1;
  printf("Digita a base: ");
  scanf("%f", &base);
  printf("Digita a potencia: ");
  scanf("%f", &exp);

  if (exp < 0 && base != 0){
    base = 1/base;
    exp = -exp;
  }

  for (int x = 0; x < exp; x++){
    potencia = potencia * base;
  }

  if (base == 0 && exp <= 0){
    printf("Entrada inválida\n");
  }
  else{
    printf("%.2f", potencia);
  }

  return 0;
}

