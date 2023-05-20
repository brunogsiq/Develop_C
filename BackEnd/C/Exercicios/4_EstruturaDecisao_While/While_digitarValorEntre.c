#include <stdio.h>
#include <stdlib.h>

/* Ler uma nota de 0 a 10. Se o usuário digitar números fora
desse intervalo, peça que redigite*/

int main(){
    float nota;
    printf("Digite uma nota de 0 a 10: \n");
    scanf("%f", &nota);
    while (nota < 0 || nota > 10){
           printf("Valor invalido, digite uma nota de 0 a 10: \n");
           scanf("%f", &nota);
    }

return 0;
}
