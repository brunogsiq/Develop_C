#include <stdio.h>
#include <stdlib.h>

///Função que recebe dois inteiros e imprime operações aritméticas
///Como a função apenas imprime, o retorno é vazio (void)
void imprimeOperacoes(int a, int b){

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d",a,b,a%b);

}

int main() {
    int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d",&x,&y);

    imprimeOperacoes(x,y);

    return 0;
}


