#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia um n�mero do sistema bin�rio de at� 5 d�gitos
e o converta para o sistema decimal. Armazene o n�mero lido e o convertido em vari�veis inteiras*/

int main()
{
  int binario, d0, d1, d2, d3, d4, decimal, bin;
  scanf("%d", &binario);
    bin = binario;
    d0 = binario%10;
    binario = binario/10;
    d1 = binario%10;
    binario = binario/10;
    d2 = binario%10;
    binario = binario/10;
    d3 = binario%10;
    binario = binario/10;
    d4 = binario%10;
    binario = binario/10;

  decimal = d0*pow(2,0) + d1*pow(2,1) + d2*pow(2,2) + d3*pow(2,3) + d4*pow(2,4);

  printf("%d (base 2) = %d (base 10)", bin, decimal);

  return 0;
}
