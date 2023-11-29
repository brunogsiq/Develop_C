#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>//PALETA DE CORES DE 0 A 9

int main()
{
    system("Color 81");
    char operArit1, operArit2, resposta;
    float valorUm, valorDois, valorFinal;

    printf("\n***#ESTE EH UM EXERCICIO PARA NOTA#***\n\n     BEM VINDO A CALCULADORA EM C\n\n");
    printf("FAREMOS OS TIPOS DE OPERACOES: ");
    printf("\nSOMA(+) - EXEMPLO = 10 + 10 = 20");
    printf("\nSUBTRACAO(-) - EXEMPLO = 10 - 5 = 5");
    printf("\nMULTIPLICACAO(*) - EXEMPLO = 2 * 5 = 10");
    printf("\nDIVISAO(/) - EXEMPLO = 10 / 2 = 5");
    printf("\nRESTO DE UMA DIVISAO(R)ou(r)) - EXEMPLO = 10 R/r 2 = 0");
    printf("\nPORCENTAGEM(%%) - EXEMPLO = 10+10% = 11 & 10-10=9 & 10*10%=1 & 10/10%= ERROR %\n\n");

    do{
        printf("\nDIGITE VALOR 1 : ");
        scanf(" %f", &valorUm);
        printf("SINAL DA OPERACAO : ");
        scanf(" %c", &operArit1);
        printf("DIGITE VALOR 2 : ");
        scanf(" %f", &valorDois);
        printf("TIPO DA OPERACAO : ");
        scanf(" %c", &operArit2);
        switch(operArit1)
        {
            case '+' :
                valorFinal = valorUm + valorDois;
                break;
            case '-' :
                valorFinal = valorUm - valorDois;
                break;
            case '*' :
                valorFinal = valorUm * valorDois;
                break;
            case '/' :
                valorFinal = valorUm / valorDois;
                break;
            case 'R' :
                valorFinal = (int)valorUm % (int)valorDois;
                break;
            case 'r' :
                valorFinal = (int)valorUm % (int)valorDois;
                break;
        }
        switch(operArit2)
        {
            case '=':
                if (operArit1 == '/' && valorDois == 0){
                  printf("ERRO - DIVISAO POR ZERO (0).\n");
                }
                else{
                  printf("EQUACAO : %.2f %c %.2f %c %.2f\n\n", valorUm, operArit1, valorDois, operArit2, valorFinal);
                }

            break;
            case '%':
                    switch(operArit1)
                    {
                    case '+' :
                        printf("EQUACAO: %.2f %c %.2f %c = %.2f\n\n", valorUm, operArit1, valorDois, operArit2, valorUm + ((valorDois*0.1) * (valorUm*0.1)));
                        break;
                    case '-' :
                        printf("EQUACAO: %.2f %c %.2f %c = %.2f\n\n", valorUm, operArit1, valorDois, operArit2, valorUm - ((valorDois*0.1) * (valorUm*0.1)));
                        break;
                    case '*' :
                        printf("EQUACAO: %.2f %c %.2f %c = %.2f\n\n", valorUm, operArit1, valorDois, operArit2, ((valorDois*0.1) * (valorUm*0.1)));
                        break;
                    case '/' :
                        printf("ERROR\n");
                        break;
                    case 'R' :
                        printf("ERROR\n");
                        break;
                    case 'r' :
                        printf("ERROR\n");
                        break;
                    }
        }
        switch((int)valorDois)
        {
            case '/' :
                switch(operArit1)
                {
                    case 0 :
                    printf("ERRO - DIVISAO POR ZERO (0).\n");
                    break;
                }

        printf("\nCASO DESEJE REALIZAR OUTRO CALCULO DIGITE 'Y', SE DESEJA SAIR, DIGITE 'N' : ");
        scanf(" %c", &resposta);

       }
    }while(resposta != 'n' && resposta != 'N');

    printf("\n\nOBRIGADO POR USAR NOSSA CALCULADORA EXPERIMENTAL.\n\n");

    return 0;

}

