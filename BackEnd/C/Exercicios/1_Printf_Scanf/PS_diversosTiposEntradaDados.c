#include <stdio.h>
#include <stdlib.h>

/*
ENTRADA DE DADOS:

int = Numero Inteiros, Letras.
float = Numeros com vírgula.
double = Números com vírgula, com maior precisão. PS* Ocupa mais espaço na memória.
char = APENAS 1 letra. Ex, a; b; c;
str = Na Linguagem C, não existe STRING, mas se decidir inserir um nome, o scanf e printf deve-se utilizar %s

char z;
    scanf("%c", &z);
    printf("A LETRA ESCOLHIDA FOI: %c\n\n", z);

    char nome;
    scanf("%s ", &nome);
    printf("O NOME ESCRITO FOI: %s \n\n", nome);
*/

int main(){

    //EXEMPLOS DIVERSOS DE ENTRADA DE DADOS E APRESENTAÇÃO DOS MESMOS;

    // LETRA A //

    int a, b, c, d;
    float resultado;

    a = 20;
    b = 15;
    c = 2;
    resultado = (a-b)/(float)c;

    printf("RESPOSTA LETRA A EH:\n\n %.1f \n\n ", resultado);

    // LETRA B //

    a = 5, b = 20, c = 30,d = 15;
    float resultado2;

    resultado2 =  2*(a/(float)b) +  (float)c/(d*2) ;

    printf("RESPOSTA LETRA B EH:\n\n %.1f \n\n ", resultado2);

    // LETRA C //

    int e = 35;
    float resultado3;

    resultado3 = (35%6)+2;

/* "%.f" : O número inserido pós o ponto, representa o número de casas pós a víngula. Ex: %.2f = 2 casas; %.1f = 1 casa; */

    printf("RESPOSTA LETRA C EH:\n\n %.1f \n\n ", resultado3);

    // LETRA D //

    int f = 20;
    float resultado4;

    resultado4 = sqrt(20);

    printf("RESPOSTA LETRA D EH:\n\n %.2f \n\n ", resultado4);

    // LETRA E //

    int x, y, z;
    x = y = 10;
    z = x++;
    x = -x;
    y++;
    int x1 = x + y - z--;

    printf("VALOR DE:\nX: %d\nZ: %d\nY: %d\nX1: %d \n\n", x, y, z, x1);

    // LETRA F //

    int x1, x2, y1, y2;
    float d;

    d = sqrt(pow (x2 - x1,2) + pow(y2 - y1,2));

    printf(" A RESPOSTA DESTE EXERCICIO EH:\n\n %.4f \n\n", d);

    // LETRA G //

    int x, y;
    float resultado1, resultado2, resultado3;

    x = 2;
    y = 3;

    resultado1 = (2*(pow(x,2)) - sqrt(y)) / (3 + x);
    printf("O RESULTADO DA LETRA A EH: %.4f \n\n", resultado1);

    // LETRA G //

    y = 2;
    x = 3;

    resultado2 = (float)1/4*y + pow(((float)3*x/2),3);

    printf("O RESULTADO DA LETRA B EH: %.4f \n\n", resultado2);

    //LETRA H //

    x = 19;
    y = 10;

    resultado3 = pow(x, 1.0/3.0)+2;

    printf("O RESULTADO DA LETRA C EH: %.4f \n\n", resultado3);

    // LETRA I //

    float pii = 3.1415, V;
    int R=10;

    V = 4 * pii * pow(R,3) / 3;

    printf("O RESULTADO DESTA EQUACAO EH: %.4f \n\n", V);

    // LETRA J //

    int a, b, aux;

    a = 3;
    b = 9;

    aux = a;
    a=b;
    b=aux;

    // LETRA K //

    int A=2, B=1, C=22, D=4;
    int resultado1, resultado2, resultado3, resultado4, resultado5;
    int BASE=2, EXPOENTE=2, TOTAL = 1910 , N = 109;
    float a=19.0, b=10.0, c=2.0;

    resultado1 = (A+B)*C;

    resultado2 = TOTAL/N;

    printf("O RESULTADO DA LETRA A EH: %d \n\n", resultado1);

    printf("O RESULTADO DA LETRA B EH: %d \n\n", resultado2);

    float A1=2.0, B1=1.0, C1=22.0, D1=4.0, E=5.0;
    resultado3 = (A1 - (B1*(C1+(pow(D1,2)))))/E;

    printf("O RESULTADO DA LETRA C EH: %.2f \n\n", resultado3);

    resultado4 = pow(BASE,EXPOENTE);

    printf("O RESULTADO DA LETRA D EH: %d \n\n", resultado4);

    resultado5 = a* pow(b,c);

    printf("O RESULTADO DA LETRA E EH: %.4f \n\n", resultado5);

    return 0;
}
