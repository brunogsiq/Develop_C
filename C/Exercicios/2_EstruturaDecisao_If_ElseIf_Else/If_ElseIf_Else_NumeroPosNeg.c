#include <stdio.h>
#include <stdlib.h>

int main(){
int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
        if(num == 0){
            printf("Valor zero");
        }
        else{
            if(num > 0){
                printf("Valor positivo");
            }else
                printf("Valor negativo");
            }
return 0;
}
