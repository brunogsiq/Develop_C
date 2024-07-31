#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, horas, minutos, segundos;

    printf("DIGITE O VALOR DE SEGUNDOS QUE DESEJA SABER: ");
    scanf("%d", &segundos);

    dias = segundos / (60*60*24);
    segundos = segundos%(60*60*24);
    horas = segundos/(60*60);
    segundos = segundos%(60*60);
    minutos = segundos/60;
    segundos = segundos%60;

    printf("%d dias, %d horas, %d minutos, %d segundos\n", dias, horas, minutos, segundos);

    return 0;
}
