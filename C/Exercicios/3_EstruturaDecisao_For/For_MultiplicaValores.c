#include <stdio.h>
#include <stdlib.h>


/*Fa�a um algoritmo que calcule o produto de dois n�meros inteiros usando somas sucessivas.
 N�o pode usar o operador de multiplica��o *.
Exemplo: 6*2 = 2 + 2 + 2 + 2 + 2 + 2*/

int main()
{

 int num1, num2, soma = 0, num1Copia, num2Copia;
 printf("Digite o primeiro numero: ");
 scanf(" %d", &num1);
 num1Copia = num1;
 printf("Digite o segundo numero: ");
 scanf(" %d", &num2);
 num2Copia = num2;

  if (num1 < 0){
    num1 = -num1;
    num2 = -num2;
  }

 for (int i = 0; i< num1; i++ ){
  soma = soma + num2;
 }

 printf(" %d X %d = %d \n", num1Copia, num2Copia, soma);


return 0;

};
