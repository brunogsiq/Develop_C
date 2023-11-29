#include <stdio.h>
#include <stdlib.h>

/*
Categoria natação
Crie um algoritmo que leia a idade de um nadador
 e informe a categoria em que o mesmo se enquadra.
 A categoria é definida pela idade, a partir das seguintes faixas:
Infantil – 0 a 10 anos
Juvenil – 11 a 17 anos
Adulto – 18 a 64 anos
Sênior – 65 ou mais anos
*/
int main()
{
    int idade;
    printf("Digite a idade do COMPETIDOR: ");
    scanf("%d", &idade);


   if(idade<=0)
    {
    printf("Idade Invalida");
    }
     else if(idade>=1 && idade<=10)
     {
      printf("Categoria: Infantil");
     }else if(idade>=11 && idade<=17)
            {
             printf("Categoria: Juvenil");
            }else if(idade>=18 && idade<=64)
                    {
                    printf("Categoria: Adulto");
                    }else if(idade>=65)
                            {
                            printf("Categoria: Senior");
                            }
    return 0;
}
