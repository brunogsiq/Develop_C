#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia um n�mero inteiro:
 diga se ele � par ou �mpar.
Um n�mero � par quando � divis�vel por dois (resto da divis�o por dois � zero)


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
