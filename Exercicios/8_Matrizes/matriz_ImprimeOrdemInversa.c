#include <stdio.h>
#include <stdlib.h>

/*
1. Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem
inversa.
*/

int main(){

     char palavras[3][30];
     //captura palavras
     for(int i=0;i<3;i++){
     printf("Informe palavra %d: ",i+1);
     gets(palavras[i]);
     }
     //EXIBE EM ORDEM INVERSA
     printf("\n::: Palavras em ordem inversa :::\n");
     for(int i=2;i>=0;i--)
     {
        printf("%s\n",palavras[i]);
     }
    return 0;
}
