#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    char sexo;

    printf("Digita sua idade: \n");
    scanf("%d", &idade);
    printf("Digita seu Sexo: \n");
    scanf(" %c", &sexo);

    if(idade>=18 && sexo=='m')
     {
     printf("Maior de idade e Homem");
     }else if(idade<=18 && sexo=='m')
            {
            printf("Menor de idade e Homem");
            }else if(idade>=18 && sexo=='f')
                   {
                   printf("Maior de idade e Mulher");
                   }else
                        {
                        printf("Menor de idade e Mulher");
                        }


return 0;
}
