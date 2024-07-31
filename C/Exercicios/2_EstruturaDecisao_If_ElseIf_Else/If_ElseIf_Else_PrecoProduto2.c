#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    float precoUnitario, preco;
    printf("DIGITE A QUANTIDADE E O PRECO UNITARIO: ");
    scanf("%d %f", &quantidade, &precoUnitario);
    preco = quantidade * precoUnitario;

    if(quantidade > 10 && precoUnitario > 50.0){
        preco = preco * 0.85;
        printf("Ganhou um desconto de 15%%!\n");
    }else
     {
        preco = preco * 0.95;
        printf("Toda a loja com 5%% de desconto!\n");
     }

    printf ("\nPreco final: %.2f", preco);

return 0;
}
