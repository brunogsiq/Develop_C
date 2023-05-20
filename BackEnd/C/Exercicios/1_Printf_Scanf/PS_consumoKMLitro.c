#include <stdio.h>
#include <stdlib.h>


int main(){
    float distancia, kmPorlitro, litros, preco, consumo;

    printf("Digite quantos Km eh a distancia a percorrer: ");
    scanf("%f", &distancia);

    printf("Digite quantos Km o veiculo faz por litro: ");
    scanf("%f", &kmPorlitro);

    printf("Digite o preco do litro do combustivel: R$");
    scanf("%f", &preco);


    litros = distancia / kmPorlitro;
    consumo = preco * litros;

    printf("\nPrecisa abastecer um total de R$%.2f litros \n", litros);
    printf("Seu consumo em dinheiro eh: R$%.2f\n", consumo);


    return 0;
}
