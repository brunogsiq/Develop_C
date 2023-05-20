#include <stdio.h>
#include <stdlib.h>

void main(){
    float preco;

    printf("Digite um preco: ");
    scanf("%f",&preco);

    if(preco <= 2){
        preco = preco + 0.15;
    }else{
        if(preco > 2 && preco < 5){
            preco = preco + 0.15 + (preco - 2)*0.02;
        }else{
            if(preco > 5 && preco < 20){
                preco = preco + 0.15 + 3*0.02 + (preco - 5)*0.1;
            }else{
                if(preco > 20){
                    preco = preco + 0.15 + 3*0.02 + 15*0.1+ (preco - 20)*0.08;               }
            }
        }
    }

    printf("\nPreco final: %.2f", preco);
}




