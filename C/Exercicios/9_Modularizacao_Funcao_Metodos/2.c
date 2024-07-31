#include <stdio.h>
#include <stdlib.h>

//procedimento imprimir menu
void imprimirMenu(void)
{
    printf("******************\n");
    printf("*******MENU*******\n");
    printf("1 - Cadastrar \n");
    printf("2 - Excluir \n");
    printf("3 - Sair \n");
    printf("******************\n");
    return;
}

int main()
{
    imprimirMenu();
    return 0;
}
