#include <stdio.h>
#include <stdlib.h>

/*
3) Fa�a um algoritmo para exibir os 30 primeiros n�meros da sequ�ncia de Fibonacci. A sequ�ncia
de Fibonacci come�a com 1 e 1, e cada n�mero seguinte � a soma dos dois anteriores.
Exemplo dos primeiros termos: 1 1 2 3 5 8 13 21
*/

int main()
{
    int anterior = 1, proximo = 1, atual = 2, numDeVezes = 1;

    printf("OLA FIBONACCIANO!!!\n\n");
     printf("TUDO SE INICIA EM 1,1 ...\n\n");
    do{
       for(int x = 0; x<30; x++){
       printf("%d + %d = %d \n", anterior, proximo, atual);
       proximo = anterior;
       anterior = atual;
       atual = anterior + proximo;
       numDeVezes++;
       }
    }while(numDeVezes<=30);

    return 0;
}
