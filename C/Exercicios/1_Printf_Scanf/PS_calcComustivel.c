#include <stdio.h>
#include <stdlib.h>

/* Um motorista de táxi anota a quilometragem do seu veículo antes e após uma viagem.
   bem como o número de litros de combustível gastos.
   Elabore um algoritmo que leia os 3 dados acima e a capacidade do tanque.
   Ao final o algoritmo deve calcular e mostrar quantos quilômetros o seu carro faz com um tanque cheio.*/

int main()
{
    float kmInicial, kmFinal, combustAbast, combusGasto, combusTqCh ,capaciddTq;

    printf("Digite a capacidade do tanque do seu veiculo (Lt): ");
    scanf("%f", &capaciddTq);
    printf("\nAgora Digite o Numero de Km Final: ");
    scanf("%f", &kmFinal);
    printf("\nAgora Digite o Numero de Km Inicial: ");
    scanf("%f", &kmInicial);
    printf("\nAgora Digite a Quantidade de Litros Abastecidos: ");
    scanf("%f", &combustAbast);

    combusGasto = (kmFinal-kmInicial)/combustAbast;

    combusTqCh = capaciddTq*combusGasto;

    printf("\nSeu veiculo faz %.2f Km/Lt.", combusGasto);
    printf("Eh capaz de fazer ate %.2f Km com o Tanque Cheio", combusTqCh);

    return 0;
}
