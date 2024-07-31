#include <stdio.h>
#include <stdlib.h>

/*
1) Faça um algoritmo para uma urna eletrônica que apresente 6 opções:
1 – Candidato A; 2 –Candidato B; 3 – Candidato C; 4 – Voto nulo; 5 – Voto branco; 6 – Encerrar urna.
O algoritmo deverá receber os votos dos eleitores até que a opção 6 (Encerrar urna) seja selecionada. Após o
encerramento da urna, o algoritmo deve exibir:
a) o total de votos da eleição
b) o número de votos de cada candidato
c) o candidato vencedor
d) a porcentagem de votos brancos
e) a porcentagem de votos nulos
*/


int main()
{
    int opcao, voto=0, votoA=0, votoB=0, votoC=0, votoN=0, votoBc=0, totalDeVotos=0;

    do{
        printf("CANDIDATO A : 1\n");
        printf("CANDIDATO B : 2\n");
        printf("CANDIDATO C : 3\n");
        printf("  VOTO NULO : 4\n");
        printf("VOTO BRANCO : 5\n");
        printf("   ENCERRAR : 6\n\n");
        printf(" DIGITE SUA OPCAO: ");
        scanf("%d", &opcao);
    if(opcao == 1){
        votoA++;
        totalDeVotos++;
    }else if(opcao == 2){
        votoB++;
        totalDeVotos++;
    }else if(opcao == 3){
        votoC++;
        totalDeVotos++;
    }else if(opcao == 4){
        votoN++;
        totalDeVotos++;
    }else if(opcao == 5){
        votoBc++;
        totalDeVotos++;
    }
    }while( opcao !=6 );

    printf("CANDIDATO A : %d VOTOS\n", votoA);
    printf("CANDIDATO B : %d VOTOS\n", votoB);
    printf("CANDIDATO C : %d VOTOS\n", votoC);
    printf("  VOTO NULO : %d VOTOS\n", votoN);
    printf("VOTO BRANCO : %d VOTOS\n", votoBc);
    printf("\n\nAO TODO FORAM : %d VOTOS", totalDeVotos);

    printf("\n\n OBRIGADO\n\n");


    return 0;
}
