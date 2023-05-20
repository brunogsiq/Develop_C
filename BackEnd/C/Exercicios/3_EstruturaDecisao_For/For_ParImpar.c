#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia um número inteiro:
 diga se ele é par ou ímpar.
Um número é par quando é divisível por dois (resto da divisão por dois é zero)


*/

int main()
{
    int numero;
    printf("Entre com o numero desejado: ");
    scanf("%d", &numero);
    if(numero%2==0){
        printf("Numero eh PAR");
    }else{
        printf("Numero eh IMPAR");
    }

    return 0;
}
