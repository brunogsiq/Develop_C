#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia a altura e o peso de 100 pessoas e exiba o IMC de cada uma. IMC = peso/altura2

*/

int main()
{
    int pessoa;
    float peso, imc, altura;

    for(pessoa=1;pessoa<101; pessoa++){
        printf("Entre com o Peso da Pessoa: Kg(s)");
        scanf("%f", &peso);
        printf("Entre com a Altura da Pessoa: Mt(s)");
        scanf("%f", &altura);
        imc= peso/pow(altura,2);
        printf("O IMC eh: %.2f da Pessoa %d\n\n", imc, pessoa);
    }
    return 0;
}
