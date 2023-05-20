#include <stdio.h>
#include <stdlib.h>

int main(){

    //OPERACOES MATEMÁTICAS COM NUMERO INTEIROS;
    int a,b;

    printf("OPERACOES SOBRE INTEIROS\n");
    printf("Digite o primeiro valor: ");
    scanf("%d",&a);
    printf("Digite o segundo valor: ");
    scanf("%d",&b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n",a, b, a%b);

    return 0;
}
