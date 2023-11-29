#include <stdio.h>
#include <stdlib.h>

int main()
{
    //OPÇÃO 1;
    int idCarlos = 28, idLeandro = 40, idHenrique = 53;
    float mediaIdade;

    mediaIdade = (idCarlos + idLeandro + idHenrique) / 3.0;

    // OPÇÃO 2;

    int idCarlos2 = 28, idLeandro2 = 40, idHenrique2 = 53;
    float mediaIdade2;

    mediaIdade = (idCarlos2 + (float)idLeandro2 + idHenrique2) / 3.0;//

    printf("A media de idade eh %.4f", mediaIdade2);

    return 0;
}
