#include <stdio.h>
#include <stdlib.h>

int main(){

    float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = 3.14159 * pow(raio,2);
    printf("Area do circulo: %.2f", area);

return 0;
}
