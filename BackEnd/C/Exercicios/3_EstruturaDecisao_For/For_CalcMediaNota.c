#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia três notas de uma aluno,
 calcule a média
 depois verifica se o aluno está aprovado ou reprovado.
 Aprovado média maior ou igual a 6,
 caso contrário reprovado.*/

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
