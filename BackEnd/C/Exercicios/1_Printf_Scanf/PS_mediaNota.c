#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notap1, notap2, notap3;
    float mediaFinal;

    printf("Digita a nota 1: \n");
    scanf("%f", &notap1);

    printf("Digita a nota 2: \n");
    scanf("%f", &notap2);

    printf("Digita a nota 3: \n");
    scanf("%f", &notap3);

    mediaFinal = ((notap1 * 2) + (notap2 * 3) + (notap3 *5)) / 10;

    printf("A media final eh: %.2f", mediaFinal);

    return 0;
}
