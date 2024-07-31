#include <stdio.h>
#include <stdlib.h>

/*
Algoritmo que verifica se um número inteiro é um
palíndromo. Exemplos de palíndromos: 11, 191, 1001, …
Que módulos podemos construir?
– inverteNumero: inverte número digitado
– verificaPalindromo: verifica se o número digitado é igual ao
número invertido
*/

//protótipo módulo inverter número
int inverterNumero(int n);
//protótipo módulo verificar se é palíndromo
void verificarPalindromo(int n1, int n2);

int main(){
    int x, y;
    printf("Digite numero: \n");
    scanf("%d", &x);
    y = inverterNumero(x);
    verificarPalindromo(x,y);
    return 0;
}
//módulo para inverter número

int inverterNumero(int n)
{
    int d, invertido = 0;
    while (n != 0)
    {
        d = n%10;
        invertido = invertido*10 + d;
        n = n/10;
    }
    return invertido;
}
//módulo para verificar se é palíndromo
void verificarPalindromo(int n1, int n2)
{
    if (n1 == n2)
    {
        printf("%d e um palindromo \n", n1);
    }
    else{
     printf("%d nao e um palindromo \n", n1);
     }
}

