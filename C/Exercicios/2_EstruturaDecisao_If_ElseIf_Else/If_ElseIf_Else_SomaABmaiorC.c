#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia três valores inteiros
 A, B, C e imprima na tela a soma de A + B, se esta for maior do que C.
*/

int main()
{
    int a,b,c,soma;
    printf("DIGITE 3 VALORES: ");
    scanf("%d %d %d", &a,&b,&c);
    soma=a+b;
    if(soma>c){
        printf("\nA Soma de A+B eh maior que C");
    }else{
        printf("\nA Soma eh menor que C");
    }
    return 0;
}
