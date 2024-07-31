#include <stdio.h>
#include <stdlib.h>

/*
Porcentagem e média de idade de pessoas de cada sexo
Faça um algoritmo que leia o sexo (M/F)
a idade de 500 pessoas
ao final a porcentagem de pessoas de cada
sexo e
média de idade de cada sexo
*/

int main()
{
    int contSM = 0, contSF = 0, contSI = 0, contIM = 0, contIF = 0, contII = 0, idade = 0, somaM = 0, somaF = 0, somaI = 0;
    char sexo;
    float mediaIdadeM, mediaIdadeF, mediaIdadeI, totalIdade, porcSI = 0, porcSM = 0, porcSF = 0;

    for(int x=0; x<3; x++){

    printf("Digite o Sexo %d Pessoa: ", x+1);
    scanf(" %c", &sexo);
    printf("Digite a Idade da %d Pessoa: ", x+1);
    scanf(" %d", &idade);

       if(sexo == 'm' && idade)
       {
         somaM = somaM + idade;
         contIM++;
         contSM++;
         mediaIdadeM = somaM / contIM;
       }
           else if(sexo == 'f'&& idade)
           {
               somaF = somaF + idade;
               contIF++;
               contSF++;
               mediaIdadeF = somaF / contIF;
            }
               else if(sexo != 'm' || sexo != 'f')
               {
                    somaI = somaI + idade;
                    contII++;
                    contSI++;
                    mediaIdadeI = somaI / contII;
               }
    }
    totalIdade = (somaM + somaF + somaI) / 3;
    porcSI = contSI / (float)((contSM+contSF+contSI) / 100);
    porcSF = contSF / (float)((contSM+contSF+contSI) / 100);
    porcSM = contSM / (float)((contSM+contSF+contSI) / 100);

    printf("Sao %d pessoas do sexo FEMININO com media de idade %.2f que totaliza %.2f .\n\n" , contSF, mediaIdadeF, porcSF);
    printf("Sao %d pessoas do sexo MASCULINO com media de idade %.2f que totaliza %.2f .\n\n" , contSM, mediaIdadeM, porcSM);
    printf("Sao %d pessoas do sexo INVALIDO com media de idade %.2f que totaliza %.2f .\n\n" , contSI, mediaIdadeI, porcSI);
    printf("A media de idade eh: %.2f", totalIdade);
    return 0;
}
