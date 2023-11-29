#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idades[10];
    //cadastra idades
    for (int x=0; x<10; x++)
    {
        printf("Digite a idade da posicao: %d \n", x+1);
        scanf("%d", &idades[x]);
    }
    //exibe idades ordem inversa
    for (int x=0; x<10; x++)
    {
        printf("INVERTIDO FICA: %3d ", idades[9-x]);
    }

    return 0;
}
