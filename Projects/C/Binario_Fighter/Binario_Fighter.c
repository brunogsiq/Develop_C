#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>//PALETA DE CORES DE 0 A 9

int numeroAletorio ( int atq1, int atq2, int hp1, int hp2)
{
    int ataquePL1, ataquePL2, hpVidaMocinho = 100, hpVidaVilao = 100;

    srand( time(NULL));
    for( int x = 1; hpVidaMocinho >= 1 && hpVidaVilao >= 1; x++)
    {
    printf("Ataque %d\n", x);
    ataquePL1 = rand()%20;
    ataquePL2 = rand()%20;

    hpVidaMocinho = hpVidaMocinho - ataquePL2;
    hpVidaVilao = hpVidaVilao - ataquePL1;

    printf("     HEROI ATINGIU COM: %d\n", ataquePL1);
    printf("        HP DO VILAO EH: %d\n", hpVidaVilao);
    printf("     VILAO ATINGIU COM: %d\n", ataquePL2);
    printf("        HP DO HEROI EH: %d\n\n", hpVidaMocinho);

        if( hpVidaVilao <= 0 || hpVidaMocinho <= 0 )
        {
            if( hpVidaMocinho < hpVidaVilao )
            {
                printf("\n***VILAO VENCEU***\n\n");
            }
        }
        if( hpVidaVilao <= 0 || hpVidaMocinho <= 0 )
        {
            if(hpVidaMocinho > hpVidaVilao)
            {
                printf("\n***HEROI VENCEU\***\n\n");
            }
        }
        if ( hpVidaMocinho <= 0 && hpVidaVilao <= 0 && hpVidaMocinho == hpVidaVilao )
        {
            printf("HOUVE EMPATE!!!");
        }
    }
}

int main(){

    system("Color 47");
    int inscricao;

    printf("BEM VINDO AO BINARIO FIGHTER\n\n");
    printf(" DESEJA TESTAR SUA SORTE ???\n\n");
    printf("  DIGITE '1' PARA ENTRAR E '2' PARA FUGIR !!! : ");
    scanf("%d", &inscricao);

    while(inscricao == 1)
    {
        printf("\n   VOCE ESTA INCRITO, ESCOLHA SEU LUTADOR!!!\n\n");

        int lutador, ataquePL1, ataquePL2, hpVidaMocinho = 100, hpVidaVilao = 100;

        printf("    ESCOLHA ENTRE LUTADOR 'HEROI : 1' E 'VILAO : 2'!!! : ");
        scanf("%d", &lutador);

            switch(lutador == 1)
            {
                case 1 :
                    printf("\n     VOCE ESCOLHEU O HEROI!!!");
                    printf("\n      SUA FORCA EH ALEATORIA E SEU HP EH: 1000!!!\n\n");

                    numeroAletorio( ataquePL1, ataquePL2, hpVidaMocinho, hpVidaVilao);
            }
            switch(lutador == 2)
            {
                case 1 :
                    printf("\n     VOCE ESCOLHEU O VILAO!!!");
                    printf("\n      SUA FORCA EH ALEATORIA E SEU HP EH: 1000!!!\n\n");

                    numeroAletorio( ataquePL1, ataquePL2, hpVidaMocinho, hpVidaVilao);
            }
        printf("\n\nDESEJA TENTAR NOVAMENTE??? : ");
        scanf("%d", &inscricao);
    }

    printf("\n ATE O PROXIMO BINARIO FIGHTER !!!\n\n");

    return 0;
}

