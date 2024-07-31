#include <stdio.h>
#include <stdlib.h>
/*
11. Eleição
Faça um algoritmo para ler o nome de quatro candidatos em uma eleição e
o número de votos que cada um obteve.

Ao final o algoritmo deve escrever
o nome e
o número de votos do candidato eleito
ou se houve empate.
 
Dica 1: para declarar uma variável que armazena uma cadeia de caracteres (string), use o modelo abaixo:
char nome[10];
Dica 2: para ler uma string, use o modelo abaixo:
scanf("%s", nome);
Dica 3: para exibir uma string, use o modelo abaixo:
printf("%s", nome)



*/
int main()
{
    char nomeC1[10], nomeC2[10], nomeC3[10], nomeC4[10];
    int votosCand1, votosCand2, votosCand3, votosCand4, votosCandtotal;

    printf("Digite o NOME dos candidato 01 e Numero de votos: ");
    scanf("%s %d", &nomeC1, &votosCand1);
    printf("Digite o NOME dos candidato 02 e Numero de votos :");
    scanf("%s %d", &nomeC2, &votosCand2);
    printf("Digite o NOME dos candidato 03 e Numero de votos :");
    scanf("%s %d", &nomeC3, &votosCand3);
    printf("Digite o NOME dos candidato 04 e Numero de votos :");
    scanf("%s %d", &nomeC4, &votosCand4);

    votosCandtotal = votosCand1+votosCand2+votosCand3+votosCand4;

    printf("\n\nAo todo tivemos %d votos\n\n", votosCandtotal);
    if(votosCand1>votosCand2 && votosCand1>votosCand3 && votosCand1>votosCand4){
     printf("Candidato %s eh o vencedor com %d votos.", nomeC1, votosCand1);
     }else if(votosCand2>votosCand1 && votosCand2>votosCand3 && votosCand2>votosCand4){
            printf("Candidato %s eh o vencedor com %d votos.", nomeC2, votosCand2);
            }else if(votosCand3>votosCand1 && votosCand3>votosCand2 && votosCand3>votosCand4){
                   printf("Candidato %s eh o vencedor com %d votos.", nomeC3, votosCand3);
                   }else if(votosCand4>votosCand1 && votosCand4>votosCand2 && votosCand4>votosCand3){
                          printf("Candidato %s eh o vencedor com %d votos.", nomeC4, votosCand4);
                          }else{
                               printf("HOUVE UM EMPATE\n\n");
                               }
    return 0;
}
