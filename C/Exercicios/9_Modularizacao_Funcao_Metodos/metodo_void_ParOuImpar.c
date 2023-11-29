#include <stdio.h>
#include <stdlib.h>

void ehPar(int n){

    if((n % 2) == 0){
        printf("O numero eh par");
    }else{
        printf("O numero eh impar");
    }

}

int main(){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    ehPar(n);

    return 0;
}
