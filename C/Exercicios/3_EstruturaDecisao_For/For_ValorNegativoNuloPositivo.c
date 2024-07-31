#include <stdio.h>
#include <stdlib.h>

/*
16. Positivo, negativo ou nulo
Faça um algoritmo que leia um valor inteiro N,
a qual corresponde a quantidade de valores que serão lidos em seguida.
Para cada valor lido,
mostre uma mensagem dizendo se este valor é positivo, negativo ou nulo.
*/


int main()
{
    int N;
    float dados;
    printf("DIGITE QUANTOS DADOS SERAO LIDOS: ");
    scanf("%d", &N);

    for(int x=0; x<N; x++){

    printf("\n\n\DIGITE O DADO NUMERO %d: ", x+1);
    scanf(" %f", &dados);

    if(dados<0){
        printf("VALOR NEGATIVO");
    }else if(dados>0){
        printf("VALOR POSITIVO");
          }else{
              printf("VALOR NULO");
           }
    }

    return 0;
}
