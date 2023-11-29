#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];

    printf("DESCUBRA PARA QUAL TIME O HOMEM TORCE. \n\n");
    printf("PARA SELECIONAR BRUNO, ESCREVA B\n");
    printf("PARA SELECIONAR IGOR , ESCREVA I\n\n");
    scanf(" %s", &nome[10] );

    switch( nome[10] )
    {
            case 'B' :
                printf("CORINTHIANS")
                break;
            case 'BR' :
                printf("CORINTHIANS");
                break;
            case 'BRUN' :
                printf("CORINTHIANS");
                break;
            case 'BRUN' :
                printf("CORINTHIANS");
                break;
            case 'BRUNO' :
                printf("CORINTHIANS");
                break;

            case 'I' :
                printf("PALMEIRAS");
                break;
            case 'IG' :
                printf("PALMEIRAS");
                break;
             case 'IGO' :
                printf("PALMEIRAS");
                break;
             case 'IGOR' :
                printf("PALMEIRAS");
                break;
    }

    return 0;
}
