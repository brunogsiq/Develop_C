#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    char sinal;

    printf("Digite dois numeros inteiros: ");
    scanf("%f%f", &n1, &n2);
    printf("Digite um sinal aritmetico: ");
    scanf(" %c", &sinal);

    if(sinal == '+')
    {
       int soma;
       soma = n1 + n2;
       printf("\n\VALOR EH: %d", soma);
    }else if(sinal == '-')
     {
       int sub;
       sub = n1 - n2;
       printf("\n\VALOR EH: %d", sub);
     }else if(sinal == '*')
      {
        int mult;
        mult = n1 * n2;
        printf("\n\VALOR EH: %d", mult);
      }else
       {
         int divs;
         divs = n1 / n2;
         printf("\n\VALOR EH: %d", divs);
       }

    return 0;
}
