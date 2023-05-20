#include <stdio.h>
#include <stdlib.h>


int main(){
    float potenciaAprl1, potenciaAprl2, consumo1, consumo2;
    int tempo1, tempo2;

    printf("Digite a potencia do aparelho 1 (em Watts): ");
    scanf("%f", &potenciaAprl1);

    printf("Digite a potencia do aparelho 2 (em Watts): ");
    scanf("%f", &potenciaAprl2);

    printf("Digite o tempo de utilizacao diaria do aparelho 1 (em horas): ");
    scanf("%d", &tempo1);

    printf("Digite o tempo de utilizacao diaria do aparelho 2 (em horas): ");
    scanf("%d", &tempo2);

    float valorKWattHora = 0.52049;

    printf("\nCUSTOS APARELHO 1: \n");
    printf("Por hora: R$%.2f\n",(potenciaAprl1/1000)*valorKWattHora);
    printf("Por dia: R$%.2f\n",(potenciaAprl1/1000)*valorKWattHora*tempo1);
    printf("Por mes: R$%.2f\n",(potenciaAprl1/1000)*valorKWattHora*tempo1*30);

    printf("\nCUSTOS APARELHO 2: \n");
    printf("Por hora: R$%.2f\n",(potenciaAprl2/1000)*valorKWattHora);
    printf("Por dia: R$%.2f\n",(potenciaAprl2/1000)*valorKWattHora*tempo2);
    printf("Por mes: R$%.2f\n",(potenciaAprl2/1000)*valorKWattHora*tempo2*30);

    return 0;
}
