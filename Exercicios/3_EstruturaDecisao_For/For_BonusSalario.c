#include <stdio.h>
#include <stdlib.h>

/*
 Os colaboradores com menos de:
  3 anos de casa receber�o 50% do valor do sal�rio
  e os demais 75%.
 Fa�a um algoritmo que leia:
  o tempo de casa e o sal�rio de um colaborador,
calcule e mostre o valor do b�nus de final de ano que ele receber�.

*/

int main()
{
    float salario, bonus;
    int tempo;
    printf("Insira os dados.\n1)Tempo de Emprego: (Anos) ");
    scanf("%d",&tempo);
    printf("2)Salario do Colaborador: R$");
    scanf("%f",&salario);

    if(tempo>=3){
    bonus=salario*0.75;
    salario=salario+bonus;
    printf("Seu Bonus de Final de Ano eh igual: %.2f . Seu Salario fica: %.2f .", bonus, salario);
    }else{
          bonus=salario*0.5;
          salario=salario+bonus;
          printf("Seu Bonus de Final de Ano eh igual: %.2f . Seu Salario fica: %.2f .", bonus, salario);
          }

    printf("\nBom Fim de Ano");
    return 0;
}
