#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
2) Fa�a um algoritmo para que um jogador adivinhe um n�mero gerado aleatoriamente pelo
computador de 0 a 99.
Inicialmente, o computador gera um n�mero (use o comando rand()%100), e
depois o jogador informa n�meros at� acertar. Para ajudar, a cada tentativa o computador deve
exibir a mensagem �Seu n�mero � maior do que o meu� ou �Seu n�mero � menor do que o meu�.
Ao acertar, imprima o n�mero gerado pelo computador e quantas tentativas foram necess�rias para
o jogador acert�-lo.
*/

int main()
{
    int numeroAposta, tentativas = 0;

    srand( time(NULL));
    int numeroCassino = rand()%100;

    printf("BEM VINDO AO CASSINO\n\n");
    printf("TENTE ACERTAR O NUMERO QUE FOI ESCOLHIDO.\n\n");

    do{
        scanf("%d", &numeroAposta);
        tentativas++;
    if(numeroAposta < numeroCassino){
        printf("SEU NUMERO EH MENOR QUE O MEU\n");
    }else if(numeroAposta > numeroCassino){
        printf("SEU NUMERO EH MAIOR QUE O MEU\n");
     }

    }while(numeroAposta != numeroCassino);

    printf("***PRABENSparabensPARABENSparabens****\n\n");
    printf("O NUMERO DO CASSINO NESTA JOGADA FOI: %d\n\n", numeroCassino);
    printf("O NUMERO DO TENTATIVAS NESTE JOGO FOI: %d\n\n", tentativas);
    return 0;
}
