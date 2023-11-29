#include <stdio.h>
#include <stdlib.h>

/* Para passar de fase na UC Programa��o,
o aluno precisa ter m�dia final maior ou igual a 6 e n�mero de faltas menor do que 31.
Fa�a um algoritmo que:
leia 3 notas obtidas por um aluno na UC Programa��o
 e o n�mero de faltas,
 e calcule e mostre a m�dia final.

 Ap�s isso, o  algoritmo deve informar se o aluno est� aprovado ou reprovado.
 Caso o aluno esteja reprovado,
 o algoritmo deve informar se a reprova��o foi por m�dia e/ou por faltas.

Exemplos de sa�das esperadas: Aprovado / Reprovado por m�dia / Reprovado por falta / Reprovado por m�dia e falta*/

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
