#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pii = 3.1415, V;
    int R=10;

    V = 4 * pii * pow(R,3) / 3;

    printf("O RESULTADO DESTA EQUACAO EH: %.4f \n\n", V);

    return 0;
}
