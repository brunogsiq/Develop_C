#include <stdio.h>
#include <stdlib.h>
/*
10. Produto vencido?
Fa�a um algoritmo que leia a data de validade de um produto
leia tamb�m a data de hoje.
Cada data deve ser lida usando tr�s inteiros,
representando dia, m�s e ano.
O algoritmo deve ent�o mostrar na tela se o produto est� vencido ou n�o.



*/


int main()
{
    int dataDia, dataMes, dataAno;
    int dataDiaVal, dataMesVal, dataAnoVal;
    int saida;

    printf("DIGITE 1 PARA AVALIACAO DO PRODUTO: ");
    scanf("%d", &saida);
    while(saida>0){

    printf(" Entre com o Data de Hoje:\n\n");
    printf(" Digite o Dia: ");
    scanf("%d" , &dataDia);
    printf(" Digite o Mes: ");
    scanf("%d" , &dataMes);
    printf(" Digite o Ano: ");
    scanf("%d" , &dataAno);
    printf(" Hoje eh %d / %d / %d .\n\n", dataDia, dataMes, dataAno);

    printf(" Entre com o Data de validade do Produto:\n\n");
    printf(" Digite o Dia: ");
    scanf("%d" , &dataDiaVal);
    printf(" Digite o Mes: ");
    scanf("%d" , &dataMesVal);
    printf(" Digite o Ano: ");
    scanf("%d" , &dataAnoVal);
    printf(" Data de Validade eh %d / %d / %d\n\n", dataDiaVal, dataMesVal, dataAnoVal);

       if(dataAnoVal<dataAno){
          printf("       **ATENCAO**\n#--->PRODUTO VENCIDO<---#\n\n");
        }else if(dataAnoVal<=dataAno && dataMesVal<dataMes){
                 printf("       **ATENCAO**\n#--->PRODUTO VENCIDO<---#\n\n");
               }else if(dataAnoVal<=dataAno && dataMesVal<=dataMes && dataDiaVal<dataDia){
                        printf("       **ATENCAO**\n#--->PRODUTO VENCIDO<---#\n\n");
                      }else{
                          printf("PRODUTO DENTRO DA VALIDADE\n\n");
                          }
    printf("DIGITE 1 PARA NOVA AVALIACAO DO PRODUTO: ");
    scanf("%d", &saida);
    }

    return 0;
}
