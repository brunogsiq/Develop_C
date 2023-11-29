#include <stdio.h>
#include <stdlib.h>

/*
Algoritmo que verifica se um n�mero inteiro � um
pal�ndromo. Exemplos de pal�ndromos: 11, 191, 1001, �
Que m�dulos podemos construir?
� inverteNumero: inverte n�mero digitado
� verificaPalindromo: verifica se o n�mero digitado � igual ao
n�mero invertido
*/

//prot�tipo m�dulo inverter n�mero
int inverterNumero(int n);
//prot�tipo m�dulo verificar se � pal�ndromo
void verificarPalindromo(int n1, int n2);

int main(){
    int x, y;
    printf("Digite numero: \n");
    scanf("%d", &x);
    y = inverterNumero(x);
    verificarPalindromo(x,y);
    return 0;
}
//m�dulo para inverter n�mero

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
//m�dulo para verificar se � pal�ndromo
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

