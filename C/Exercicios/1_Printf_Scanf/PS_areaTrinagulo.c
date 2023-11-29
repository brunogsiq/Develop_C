#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c, per, area;

    printf("Entre com os dados do triangulo: \n");
    scanf("%f %f %f", &a,&b,&c);
    per=(a+b+c)/2;
    area= sqrt(per*(per-a)*(per-b)*(per-c));
    printf("A area do triangulo eh: %.4f", area);
    return 0;
}
