#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    printf(" PARA SELECIONAR O EXERCICIO UTILIZE O MEU ABAIXO :\n");
    printf(" PARA SELECIONAR O EXERCICIO 1 PRESSIONE 1 :\n");
    printf(" PARA SELECIONAR O EXERCICIO 2 PRESSIONE 2 :\n");
    printf(" PARA SELECIONAR O EXERCICIO 3 PRESSIONE 3 :\n");
    printf(" PARA SELECIONAR O EXERCICIO 4 PRESSIONE 4 :\n");
    printf(" PARA SELECIONAR O EXERCICIO 5 PRESSIONE 5 :\n");
    printf(" PARA SELECIONAR O EXERCICIO 6 PRESSIONE 6 :  ");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1 :
        printf("\nVOCE ESCOLHEU O EXERCICIO 1\n\n");

                int M[6][6] , V[36];
                // Seção de Declarações das variáveis
                int a, mult;
                // Seção de Comandos, procedimento, funções, operadores, etc...
                mult = 1;

                for (int i = 1; i<=6; i++){
                    for (int j = 1; j<=6; j++)
                    {
                    printf("Digite um valor paar posicao da matriz com duas casa decimais:[ %d , %d ]\n", i, j);
                    scanf(" %d", &M[i][j]);
                    }
                }
                    printf("\n----------------------------------\n");
                    printf("\n------------Matriz M--------------\n");
                    for (int i = 1; i<=6; i++){
                    for (int j = 1; j<=6; j++)
                    {
                        printf(" %4d", M[i][j]); //%4d = tem espaçamento entre impressão, %.4f = 4 casas decimais pós vírgula;
                    }
                    printf("\n");
                    }
                    printf("\n----------------------------------\n");
                    printf("\nDigite o valor de A : ");
                    scanf(" %d", &a);

                    printf("\n----------------------------------\n");
                    printf("\nValores multiplicados por A : \n");
                    for (int i = 1; i<=6; i++){
                        for (int j = 1; j<=6; j++)
                        {
                            M[i][j] = M[i][j] * a;
                            printf(" %4d", M[i][j]);
                        }
                    printf("\n");
                    }
        break;

      case 2 :
      printf("\nVOCE ESCOLHEU O EXERCICIO 2\n");

            int mid[5][5];
            for (int i = 1; i<=5; i++)
            {
               for (int j = 1; j<=5; j++)
               {
                    if(i == j)
                    {
                    mid[i][j] =1;
                    } //declarando diagonal principal
                    else
                    {
                    mid[i][j] =0;
                    }
                }
            }
                for(int i = 1; i<=5; i++){
                    for(int j = 1; j<=5; j++){
                printf("%d", mid[i][j]);
            }
            printf("\n");
            }

        break;
    }
/*        case 3 :
        printf ("VOCE ESCOLHEU O EXERCICIO 3");

        break;
        case 4:
        printf ("VOCE ESCOLHEU O EXERCICIO 4");

        break;
        case 5 :
        printf ("VOCE ESCOLHEU O EXERCICIO 5");

        break;
        case 6:
        printf ("VOCE ESCOLHEU O EXERCICIO 6");

        break;
        default:
        printf ("VOCE NÃO SELECIONOU UM NUMERO VALIDO");*/


    return 0;
}
