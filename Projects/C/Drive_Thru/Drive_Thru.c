#include <stdio.h>
#include <stdlib.h>
#include <conio.h>//PALETA DE CORES DE 0 A 9

//SISTEMA DRIVE-THRU EM C;

int main()
{
    system("Color 46");

    char respostaSN;
    printf("OLA, SEJA BEM VINDO!!!\n");
    printf("DESEJA REALIZAR SEU PEDIDO: SIM=S OU NAO=N: ");
    scanf(" %c", &respostaSN);
    do
    {
        if(respostaSN == 's' || respostaSN == 'S')
        {
            char respostaAD;
            printf("\nVAMOS DAR INICIO AO SEU PEDIDO.\n");
            printf("JA DECIDIU OU PODEMOS TE AJUDAR / TROCAR ITEM? - AJUDA=A OU DECIDI=D: ");
            scanf(" %c", &respostaAD);
            if(respostaAD == 'A' || respostaAD == 'a')
            {
                int combos;
                printf("\nTEMOS OS SEGUINTE COMBOS: \n");
                printf("*COMBO 1: X-SALADA+REFRI+BATATA\n");
                printf("**COMBO 2: X-FRANGO+REFRI+BATATA\n");
                printf("***COMBO 3: X-CALABRESA+REFRI+BATATA\n");
                printf("****COMBO 4: X-CALAFRANGO+REFRI+BATATA\n");
                printf("*****COMBO 5: HOT DOG SIMPLES+REFRI+BATATA\n");
                printf("******COMBO 6: HOT DOG DUPLO+REFRI+BATATA\n");
                printf("*******COMBO 7: HOT DOG DE FRANGO+REFRI+BATATA\n");
                printf("********COMBO 8: HOT DOG DE CALABRESA+REFRI+BATATA\n");
                printf("*********COMBO 9: X-DOG TUDO+REFRI+BATATA\n");
                printf("QUAL COMBO DESEJAR PEDIR: ");
                scanf("%d", &combos);

                switch(combos)
                {
                    char respostaTroca;
                    case 1 :
                    printf("\nCOMBO 1 -> BOA ESCOLHA! SEGUINDO, DESEJA TROCAR ALGUM ITEM DO COMBO? - SIM=S OU NAO=N: ");
                    scanf(" %c", &respostaTroca);
                        if(respostaTroca == 's' || respostaTroca == 'S')
                        {
                            char respostaBRA;
                            printf("\nQUAL DOS DOIS ITENS DESEJA TROCAR?\n");
                            printf("DIGITE BATATA=B POR SORVETE; REFRI=R POR SUCO; AMBOS=A: ");
                            scanf(" %c", &respostaBRA);

                            if(respostaBRA == 'B' || respostaBRA == 'b')
                            {
                                printf("\nSORVETE NO LUGAR DE BATATA.\n");
                            }
                            else if(respostaBRA == 'R' || respostaBRA == 'r')
                                {
                                    printf("\nSUCO NO LUGAR DE REFRIGERANTE.\n");
                                }
                                else if(respostaBRA == 'A' || respostaBRA == 'a')
                                    {
                                        printf("\nSORVETE E SUCO NO LUGAR DE BATATA E REFIRGERANTE.\n");
                                    }
                            printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                        }
                        else
                            {
                                printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                            }
                    break;
                    case 2 :
                    printf("\nCOMBO 2 -> BOA ESCOLHA! SEGUINDO, DESEJA TROCAR ALGUM ITEM DO COMBO? - SIM=S OU NAO=N: ");
                    scanf(" %c", &respostaTroca);
                        if(respostaTroca == 's' || respostaTroca == 'S')
                        {
                            char respostaBRA;
                            printf("\nQUAL DOS DOIS ITENS DESEJA TROCAR?\n");
                            printf("DIGITE BATATA=B POR SORVETE; REFRI=R POR SUCO; AMBOS=A: ");
                            scanf(" %c", &respostaBRA);

                            if(respostaBRA == 'B' || respostaBRA == 'b')
                            {
                                printf("\nSORVETE NO LUGAR DE BATATA.\n");
                            }
                            else if(respostaBRA == 'R' || respostaBRA == 'r')
                                {
                                    printf("\nSUCO NO LUGAR DE REFRIGERANTE.\n");
                                }
                                else if(respostaBRA == 'A' || respostaBRA == 'a')
                                     {
                                        printf("\nSORVETE E SUCO NO LUGAR DE BATATA E REFIRGERANTE.\n");
                                     }
                        printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                        }
                        else
                             {
                                 printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                             }
                    break;
                    case 3 :
                    printf("\nCOMBO 3 -> BOA ESCOLHA! SEGUINDO, DESEJA TROCAR ALGUM ITEM DO COMBO? - SIM=S OU NAO=N: ");
                    scanf(" %c", &respostaTroca);
                        if(respostaTroca == 's' || respostaTroca == 'S')
                        {
                            char respostaBRA;
                            printf("\nQUAL DOS DOIS ITENS DESEJA TROCAR?\n");
                            printf("DIGITE BATATA=B POR SORVETE; REFRI=R POR SUCO; AMBOS=A: ");
                            scanf(" %c", &respostaBRA);

                            if(respostaBRA == 'B' || respostaBRA == 'b')
                            {
                                printf("\nSORVETE NO LUGAR DE BATATA.\n");
                            }
                            else if(respostaBRA == 'R' || respostaBRA == 'r')
                                {
                                    printf("\nSUCO NO LUGAR DE REFRIGERANTE.\n");
                                }
                                else if(respostaBRA == 'A' || respostaBRA == 'a')
                                     {
                                        printf("\nSORVETE E SUCO NO LUGAR DE BATATA E REFIRGERANTE.\n");
                                     }
                        printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                        }else
                             {
                                 printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                             }
                    break;
                    case 4 :
                    printf("\nCOMBO 4 -> BOA ESCOLHA! SEGUINDO, DESEJA TROCAR ALGUM ITEM DO COMBO? - SIM=S OU NAO=N: ");
                    scanf(" %c", &respostaTroca);
                        if(respostaTroca == 's' || respostaTroca == 'S')
                        {
                            char respostaBRA;
                            printf("\nQUAL DOS DOIS ITENS DESEJA TROCAR?\n");
                            printf("DIGITE BATATA=B POR SORVETE; REFRI=R POR SUCO; AMBOS=A: ");
                            scanf(" %c", &respostaBRA);

                            if(respostaBRA == 'B' || respostaBRA == 'b')
                            {
                                printf("\nSORVETE NO LUGAR DE BATATA.\n");
                            }
                            else if(respostaBRA == 'R' || respostaBRA == 'r')
                                {
                                    printf("\nSUCO NO LUGAR DE REFRIGERANTE.\n");
                                }
                                else if(respostaBRA == 'A' || respostaBRA == 'a')
                                     {
                                        printf("\nSORVETE E SUCO NO LUGAR DE BATATA E REFIRGERANTE.\n");
                                     }
                        printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                        }
                        else
                             {
                                 printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                             }
                    break;
                    case 5 :
                    printf("\nCOMBO 5 -> BOA ESCOLHA! SEGUINDO, DESEJA TROCAR ALGUM ITEM DO COMBO? - SIM=S OU NAO=N: ");
                    scanf(" %c", &respostaTroca);
                        if(respostaTroca == 's' || respostaTroca == 'S')
                        {
                            char respostaBRA;
                            printf("\nQUAL DOS DOIS ITENS DESEJA TROCAR?\n");
                            printf("DIGITE BATATA=B POR SORVETE; REFRI=R POR SUCO; AMBOS=A: ");
                            scanf(" %c", &respostaBRA);

                            if(respostaBRA == 'B' || respostaBRA == 'b')
                            {
                                printf("\nSORVETE NO LUGAR DE BATATA.\n");
                            }
                            else if(respostaBRA == 'R' || respostaBRA == 'r')
                                {
                                    printf("\nSUCO NO LUGAR DE REFRIGERANTE.\n");
                                }
                                else if(respostaBRA == 'A' || respostaBRA == 'a')
                                     {
                                        printf("\nSORVETE E SUCO NO LUGAR DE BATATA E REFIRGERANTE.\n");
                                     }
                        printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                        }
                        else
                             {
                                 printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                             }
                    break;
                    case 6 :
                    printf("\nCOMBO 6 -> BOA ESCOLHA! SEGUINDO, DESEJA TROCAR ALGUM ITEM DO COMBO? - SIM=S OU NAO=N: ");
                    scanf(" %c", &respostaTroca);
                        if(respostaTroca == 's' || respostaTroca == 'S')
                        {
                            char respostaBRA;
                            printf("\nQUAL DOS DOIS ITENS DESEJA TROCAR?\n");
                            printf("DIGITE BATATA=B POR SORVETE; REFRI=R POR SUCO; AMBOS=A: ");
                            scanf(" %c", &respostaBRA);

                            if(respostaBRA == 'B' || respostaBRA == 'b')
                            {
                                printf("\nSORVETE NO LUGAR DE BATATA.\n");
                            }
                            else if(respostaBRA == 'R' || respostaBRA == 'r')
                                {
                                    printf("\nSUCO NO LUGAR DE REFRIGERANTE.\n");
                                }
                                else if(respostaBRA == 'A' || respostaBRA == 'a')
                                     {
                                        printf("\nSORVETE E SUCO NO LUGAR DE BATATA E REFIRGERANTE.\n");
                                     }
                        printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                        }
                        else
                             {
                                 printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                             }
                    break;
                    case 7 :
                    printf("\nCOMBO 7 -> BOA ESCOLHA! SEGUINDO, DESEJA TROCAR ALGUM ITEM DO COMBO? - SIM=S OU NAO=N: ");
                    scanf(" %c", &respostaTroca);
                        if(respostaTroca == 's' || respostaTroca == 'S')
                        {
                            char respostaBRA;
                            printf("\nQUAL DOS DOIS ITENS DESEJA TROCAR?\n");
                            printf("DIGITE BATATA=B POR SORVETE; REFRI=R POR SUCO; AMBOS=A: ");
                            scanf(" %c", &respostaBRA);

                            if(respostaBRA == 'B' || respostaBRA == 'b')
                            {
                                printf("\nSORVETE NO LUGAR DE BATATA.\n");
                            }
                            else if(respostaBRA == 'R' || respostaBRA == 'r')
                                {
                                    printf("\nSUCO NO LUGAR DE REFRIGERANTE.\n");
                                }
                                else if(respostaBRA == 'A' || respostaBRA == 'a')
                                     {
                                        printf("\nSORVETE E SUCO NO LUGAR DE BATATA E REFIRGERANTE.\n");
                                     }
                        printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                        }else
                             {
                                 printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                             }
                    break;
                    case 8 :
                    printf("\nCOMBO 8 -> BOA ESCOLHA! SEGUINDO, DESEJA TROCAR ALGUM ITEM DO COMBO? - SIM=S OU NAO=N: ");
                    scanf(" %c", &respostaTroca);
                        if(respostaTroca == 's' || respostaTroca == 'S')
                        {
                            char respostaBRA;
                            printf("\nQUAL DOS ITENS DESEJA TROCAR?\n");
                            printf("DIGITE BATATA=B POR SORVETE; REFRI=R POR SUCO; AMBOS=A: ");
                            scanf(" %c", &respostaBRA);

                            if(respostaBRA == 'B' || respostaBRA == 'b')
                            {
                                printf("\nSORVETE NO LUGAR DE BATATA.\n");
                            }
                            else if(respostaBRA == 'R' || respostaBRA == 'r')
                                {
                                    printf("\nSUCO NO LUGAR DE REFRIGERANTE.\n");
                                }
                                else if(respostaBRA == 'A' || respostaBRA == 'a')
                                     {
                                        printf("\nSORVETE E SUCO NO LUGAR DE BATATA E REFIRGERANTE.\n");
                                     }
                        printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                        }else
                             {
                                 printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                             }
                    break;
                    case 9 :
                    printf("\nCOMBO 9 -> BOA ESCOLHA! SEGUINDO, DESEJA TROCAR ALGUM ITEM DO COMBO? - SIM=S OU NAO=N: ");
                    scanf(" %c", &respostaTroca);
                        if(respostaTroca == 's' || respostaTroca == 'S')
                        {
                            char respostaBRA;
                            printf("\nQUAL DOS DOIS ITENS DESEJA TROCAR?\n");
                            printf("DIGITE BATATA=B POR SORVETE; REFRI=R POR SUCO; AMBOS=A: ");
                            scanf(" %c", &respostaBRA);

                            if(respostaBRA == 'B' || respostaBRA == 'b')
                            {
                                printf("\nSORVETE NO LUGAR DE BATATA.\n");
                            }
                            else if(respostaBRA == 'R' || respostaBRA == 'r')
                                {
                                    printf("\nSUCO NO LUGAR DE REFRIGERANTE.\n");
                                }
                                else if(respostaBRA == 'A' || respostaBRA == 'a')
                                     {
                                        printf("\nSORVETE E SUCO NO LUGAR DE BATATA E REFIRGERANTE.\n");
                                     }
                        printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                        }
                        else
                             {
                                 printf("\nDAREMOS SEGUIMENTO AO SEU PEDIDO.\n");
                             }
                       break;
                }

           }
           else if(respostaAD == 'D' || respostaAD == 'd')
                {
                    int combos;
                    printf("\nQUAL NUMERO DO SEU COMBO DO 1 AO 9? : ");
                    scanf(" %d", &combos);
                    switch(combos)
                    {
                        case 1 :
                        printf("SAINDO NO CAPRICHO O COMBO NUMERO 1, DIRIJA-SE AO PAGAMENTO POR FAVOR.\n");
                        break;
                        case 2 :
                        printf("SAINDO NO CAPRICHO O COMBO NUMERO 2, DIRIJA-SE AO PAGAMENTO POR FAVOR.\n");
                        break;
                        case 3 :
                        printf("SAINDO NO CAPRICHO O COMBO NUMERO 3, DIRIJA-SE AO PAGAMENTO POR FAVOR.\n");
                        break;
                        case 4 :
                        printf("SAINDO NO CAPRICHO O COMBO NUMERO 4, DIRIJA-SE AO PAGAMENTO POR FAVOR.\n");
                        break;
                        case 5 :
                        printf("SAINDO NO CAPRICHO O COMBO NUMERO 5, DIRIJA-SE AO PAGAMENTO POR FAVOR.\n");
                        break;
                        case 6 :
                        printf("SAINDO NO CAPRICHO O COMBO NUMERO 6, DIRIJA-SE AO PAGAMENTO POR FAVOR.\n");
                        break;
                        case 7 :
                        printf("SAINDO NO CAPRICHO O COMBO NUMERO 7, DIRIJA-SE AO PAGAMENTO POR FAVOR.\n");
                        break;
                        case 8 :
                        printf("SAINDO NO CAPRICHO O COMBO NUMERO 8, DIRIJA-SE AO PAGAMENTO POR FAVOR.\n");
                        break;
                        case 9 :
                        printf("SAINDO NO CAPRICHO O COMBO NUMERO 9, DIRIJA-SE AO PAGAMENTO POR FAVOR.\n");
                        break;
                    }
                }

            char pagamentoCD;
            printf("\nHORA DO PAGAMENTO!!!\nDIGITE CARTAO=C OU DINHEIRO=D : ");
            scanf(" %c", &pagamentoCD);
            if(pagamentoCD == 'D' || pagamentoCD == 'd')
            {
                char troco;
                float valorNota = 0.00, subtracao, soma = 0;
                printf("DEU R$30,00 - PRECISA DE TROCO? - DIGITE SIM=S OU NAO=N : ");
                scanf(" %c", &troco);
                if( troco == 'S' || troco == 's')
                {
                    char respostaNotas;
                    printf("ESTA PAGANDO COM MAIS DE UMA NOTA? : SIM=S OU NAO=N : ");
                    scanf(" %c", &respostaNotas);
                    if( respostaNotas == 'S' || respostaNotas == 's')
                    {
                        for(int i = 1; soma<30; i++)
                        {
                            printf("DIGITE O VALOR DA NOTA %d: ", i);
                            scanf("%f", &valorNota);
                            soma = soma + valorNota;
                        }
                        subtracao = soma - 30.00;
                        printf("SEU TROCO EH R$ %.2f\n", subtracao);
                    }
                    else
                         {
                          printf("DIGITE O VALOR DA NOTA: ");
                          scanf("%f", &valorNota);
                          subtracao = valorNota - 30.00;
                          printf("SEU TROCO EH R$ %.2f\n", subtracao);
                         }
                }
            }
            else
                 {
                    int senha;
                    printf("INSIRA SEU CARTAO\n");
                    printf("VALOR EH: R$ 30,00\n");
                    printf("DIGITE SUA SENHA: ");
                    scanf(" %d", &senha);
                    if( senha == 1234 )
                    {
                        printf("PAGAMENTO EFETUADO\n");
                    }
                    else
                         {
                         printf("SENHA INCORRETA.\n");
                         while( senha != 1234 )
                         {
                             printf("DIGITE NOVAMENTE SUA SENHA: ");
                             scanf(" %d", &senha);
                         }
                     printf("PAGAMENTO EFETUADO\n");
                     }
                 }
         char molho;
            printf("\nDESEJA ALGUM TIPO DE MOLHO? S = SIM N = NAO : ");
            scanf(" %c", &molho);

            int numMolho;
            printf("TEMOS AS SEGUINTES OPCOES: BARBECUE=1 CATCHUP=2 CEBOLA/SALSA=3 MAIONESE=4 MOSTARDA=5 TODOS=6: \n");
            if(molho == 'S' || molho == 's')
            {
                 printf("\nQUAL MOLHO DESEJAS? : ");
                 scanf(" %d", &numMolho);
                 switch( numMolho )
                 {
                    case 1:
                        printf("SEU LANCHE ACOMPANHARA O(s) MOLHO(s) : BARBECUE.\n");
                        break;
                    case 2:
                        printf("SEU LANCHE ACOMPANHARA O(s) MOLHO(s) : CATCHUP.\n");
                        break;
                    case 3:
                        printf("SEU LANCHE ACOMPANHARA O(s) MOLHO(s) : CEBOLA/SALSA.\n");
                        break;
                    case 4:
                        printf("SEU LANCHE ACOMPANHARA O(s) MOLHO(s) : MAIONESE.\n");
                        break;
                    case 5:
                        printf("SEU LANCHE ACOMPANHARA O(s) MOLHO(s) : MOSTARDA.\n");
                        break;
                    case 6:
                        printf("SEU LANCHE ACOMPANHARA O(s) MOLHO(s) : TODOS.\n");
                        break;
                 }

            }

         printf("\nPODE RETIRAR SEU PEDIDO NO PROXIMO GUICHE, OBRIGADO.\n");
         }
         else
             {
                 printf("\nOBRIGADO!!!\n");
             }
         printf("\nDESEJA FAZER OUTRO PEDIDO? : SIM=S OU NAO=N :");
         scanf(" %c", &respostaSN);
        }while( respostaSN == 'S' || respostaSN == 's');

    printf("\nOBRIGADO E VOLTE SEMPRE!!!");

    return 0;
}
