#include <stdio.h>
#include <stdlib.h>


int main(){

    float a, b, c, delta, R1, R2;
        printf("Digite os coeficientes da equacao (A B C): ");
        scanf("%f %f %f", &a, &b, &c);

    delta = pow(b,2) - 4 * a * c;

    if(delta > 0)
    {
        R1 = (-b + sqrt(delta)) / (2*a);
        R2 = (-b - sqrt(delta)) / (2*a);
        printf("Raizes da equacao: %.2f E %.2f e Delta: %.2f", R1, R2, delta);
    }else
     {
        printf("Nao existem raizes reais");
     }

    return 0;
}

