#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia tr�s notas de uma aluno,
 calcule a m�dia
 depois verifica se o aluno est� aprovado ou reprovado.
 Aprovado m�dia maior ou igual a 6,
 caso contr�rio reprovado.*/

int main()
{
    float nota1, nota2, nota3, media;
    printf("Entre com as notas do aluno\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media=(nota1+nota2+nota3)/3;
        if(media>=6)
        {
           printf("Nota: %.2f - APROVADO", media);
        }
        else
        {
           printf("Nota: %.2f - REPROVADO", media);
        }


    return 0;
}
