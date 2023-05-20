#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EXEMPLO 1
    float vet1[5]={10, 20, 30, 40, 50};
    float media1, soma1=0;

    for (int i = 0; i < 5; i++)
    {
        soma1 = soma1 + vet1[i];
    }
    media1 = soma1 / 5;

    printf("Media = %.2f", media1);

    printf("\n\n");

    //EXEMPLO 2
    float vet2[5];
    float media2, soma2 = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &vet2[5]);
        soma2 = soma2 + vet2[i];
    }
    media2 = soma2 / 5;

    printf("Media 2 eh = %.2f", media2);

    return 0;
}
