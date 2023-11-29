#include <stdio.h>
#include <stdlib.h>

/* Para passar de fase na UC Programação,
o aluno precisa ter média final maior ou igual a 6 e número de faltas menor do que 31.
Faça um algoritmo que:
leia 3 notas obtidas por um aluno na UC Programação
 e o número de faltas,
 e calcule e mostre a média final.

 Após isso, o  algoritmo deve informar se o aluno está aprovado ou reprovado.
 Caso o aluno esteja reprovado,
 o algoritmo deve informar se a reprovação foi por média e/ou por faltas.

Exemplos de saídas esperadas: Aprovado / Reprovado por média / Reprovado por falta / Reprovado por média e falta*/

int main()
{
    int faltas;
    float nota1, nota2, nota3, media;
    printf("Digita o numero de fatas:");
    scanf("%d",&faltas);
    if(faltas>30){
       printf("\nAluno *REPROVADO* Pelo Numero de Faltas\n.");
    }else{
        printf("Digita as notas: __ __ __\n");
        scanf("%f %f %f", &nota1,&nota2,&nota3);
        media=(nota1+nota2+nota3)/3;
            if(media>=6){
                printf("Aluno APROVADO com media Final: %.2f e %d Faltas.", media, faltas);
            }else{
                printf("Aluno REPROVADO com media Final: %.2f e %d Faltas.", media, faltas);
             }
         }
    return 0;
}
