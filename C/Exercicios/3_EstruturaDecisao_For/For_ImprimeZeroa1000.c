#include <stdio.h>
#include <stdlib.h>
/*Escreva um algoritmo que imprima os números
10,20,30,...,1000.

*/
int main()
{
    int numA, cont=0;
    for(numA=0; numA<=1000; cont++){
    printf(" %d...", numA);
    numA=numA+10;
    }if(numA>1000){
       printf("Fim.");
     }

    return 0;
}
