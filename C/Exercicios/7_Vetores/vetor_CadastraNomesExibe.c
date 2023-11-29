#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[10][20];
    //cadastra nomes
    for (int x=0; x<10; x++)
    {
        printf("Digite o nome da posicao: %d\n", x+1);
        scanf("%s", nomes[x]);
    }
    //exibe nomes
    for (int x=0; x<10; x++)
    {
        printf("%s \n", nomes[x]);
    }

    return 0;
}
