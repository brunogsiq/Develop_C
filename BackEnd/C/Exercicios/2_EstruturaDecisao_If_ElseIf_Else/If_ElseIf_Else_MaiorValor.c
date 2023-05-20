#include <stdio.h>
#include <stdlib.h>

int main()
{
   int valor1, valor2, maior;
    printf ("\nDigite dois valores: ");
    scanf ("%d %d", &valor1, &valor2);
        if (valor1 > valor2)
        {
            maior = valor1;
        }else
         {
            maior = valor2;
         }
    printf ("\nMAIOR = %d", maior);
}
