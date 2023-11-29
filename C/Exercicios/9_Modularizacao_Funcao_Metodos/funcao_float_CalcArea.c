#include <stdio.h>
#include <stdlib.h>

///Fun��o que recebe o raio de um c�rculo e retorna a sua area
///Pode ser definida antes da fun��o main ou depois, caso tenha sido declarada

float calculaArea(float x); ///PROTOTIPAGEM da fun��o

int main() {
	///Declara��o de vari�veis
    float area, raio;

    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);

	///Chamada da fun��o, vari�vel area recebe o retorno da fun��o
    area = calculaArea(raio);

	///Utiliza a vari�vel area na impress�o
    printf("A area do circulo eh %.2f",area);

    return 0;
}

float calculaArea(float x){///Defini��o da fun��o
    float arQ;
    arQ = pow(x,2) * 3.1415;
    return arQ;
}
