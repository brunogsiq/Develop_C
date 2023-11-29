#include <stdio.h>
#include <stdlib.h>

void main(){
    int cod;

    printf("Digite o numero do produto: ");
    scanf("%d",&cod);

    if(cod >= 1 && cod <=100){
        if(cod >= 1 && cod <= 20){
            printf("Produto da Europa");
        }else{
            if(cod >= 21 && cod <= 40){
                printf("Produto da Asia");
            }else{
                if(cod >= 41 && cod <= 60){
                    printf("Produto da America");
                }else{
                    if(cod >= 61 && cod <= 80){
                        printf("Produto da Africa");
                    }else{
                        if(cod > 80) printf("Produto do Paraguai");
                    }
                }
            }
        }
    }else{
        printf("Codigo invalido!");
        return;
    }

    printf("\nCODIGO FOI VALIDO!!");

}




