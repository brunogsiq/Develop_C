#include <stdio.h>
#include <stdlib.h>

int main(){

    //OPÇÃO 1;
    float peso, altura;

    printf("INDICE DE MASSA CORPORAL\n");
    printf("Digite o peso em kg: ");
    scanf("%f",&peso);
    printf("Digite a altura em m: ");
    scanf("%f",&altura);

    printf("Valor do IMC: %.2f", peso/pow(altura,2) );

    //OPÇÃO 2/
    float peso, altura, imc;

    printf("INDICE DE MASSA CORPORAL\n");
    printf("Digite o peso em kg: ");
    scanf("%f",&peso);
    printf("Digite a altura em m: ");
    scanf("%f",&altura);

    imc = peso / pow(altura,2);
    printf("Valor do IMC: %.2f", imc);

    return 0;
}
