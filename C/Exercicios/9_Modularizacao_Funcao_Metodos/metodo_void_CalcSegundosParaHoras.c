#include <stdio.h>
#include <stdlib.h>

void conversao(int segundos){
    int horas, minutos;

    horas = segundos/(60*60);
    segundos = segundos%(60*60);
    minutos = segundos/60;
    segundos = segundos%60;

    printf("Equivale a: %d horas, %d minutos e %d segundos\n",horas,minutos,segundos);
}

int main() {
    int segundos;

    printf("CONVERSAO DE SEGUNDOS EM HORAS, MINUTOS E SEGUNDOS\n");
    printf("Tempo total em segundos: ");
    scanf("%d",&segundos);
    conversao(segundos);

    return 0;
}


