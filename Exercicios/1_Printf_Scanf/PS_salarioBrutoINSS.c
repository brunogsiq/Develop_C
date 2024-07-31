#include <stdio.h>
#include <stdlib.h>


int main(){
    float salario, salarioBruto, inss, valorHorExtra, horaExtra;

    printf("Digite o salario bruto do funcionario: R$");
    scanf("%f", &salarioBruto);

    printf("Digite o numero de horas extras: ");
    scanf("%f", &horaExtra);

    printf("Digite o valor da hora extra: R$");
    scanf("%f", &valorHorExtra);

    ///multiplicar por 0.92 é a mesma coisa que ficar com 92%, ou seja, tirar 8% do valor
    salario = (horaExtra * valorHorExtra + salarioBruto) * 0.92;

    printf("\nO salario do funcionario sera de R$%.2f", salario);

    return 0;
}
