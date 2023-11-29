#include <stdio.h>
#include <stdlib.h>

int saoPositivos(float a, float b){
    if(a > 0 && b > 0)
    {
     return 1;
    }
    else return 0;
}

void main(){

    float a,b;

    printf("Digite dois numeros reais: \n");
    scanf("%f%f",&a,&b);

    if(saoPositivos(a,b)) printf("Os numeros sao positivos");
    else printf("Ao menos um dos numeros eh negativo");

}




