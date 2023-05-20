#include <stdio.h>
#include <stdlib.h>

///Função que recebe o raio de um círculo e retorna a sua area
///Pode ser definida antes da função main ou depois, caso tenha sido declarada

float calculaArea(float x); ///PROTOTIPAGEM da função

int main() {
	///Declaração de variáveis
    float area, raio;

    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);

	///Chamada da função, variável area recebe o retorno da função
    area = calculaArea(raio);

	///Utiliza a variável area na impressão
    printf("A area do circulo eh %.2f",area);

    return 0;
}

float calculaArea(float x){///Definição da função
    float arQ;
    arQ = pow(x,2) * 3.1415;
    return arQ;
}
