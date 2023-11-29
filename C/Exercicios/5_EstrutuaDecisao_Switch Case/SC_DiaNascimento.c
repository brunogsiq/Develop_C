#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>
#include <stdlib.h>
/*
1. Calcule quantos anos se passaram desde 1900 até o ano em que você nasceu.
2. Calcule quantos dias "29 de fevereiro" existiram depois de 1900. Para isto, basta dividir por
4 o número obtido ena 1ª etapa, sem considerar o resto da divisão.
3. Pegue o dia do seu nascimento
4. Obtenha o número associado ao mês do seu nascimento, a partir da tabela a seguir:
janeiro 0 fevereiro 3 março 3 abril 6 maio 1 junho 4
julho 6 agosto 2 setembro 5 outubro 0 novembro 3 dezembro 5
*/
int main()
{
    int diaNasc, mesNasc=0, anoNasc, anoSub, anoBiSsexto, somaNumObtd, restoDiv;

    printf("Digite o DIA de nascimento: ");
    scanf(" %d", &diaNasc);
    printf("Digite o MES de nascimento: ");
    scanf(" %d", &mesNasc);
    printf("Digite o ANO de nascimento: ");
    scanf(" %d", &anoNasc);

    switch(mesNasc)
    {
     case 1:
     mesNasc=0;
     break;
     case 2:
     mesNasc=3;
     break;
     case 3:
     mesNasc=3;
     break;
     case 4:
     mesNasc=6;
     break;
     case 5:
     mesNasc=1;
     break;
     case 6:
     mesNasc=4;
     break;
     case 7:
     mesNasc=6;
     break;
     case 8:
     mesNasc=2;
     break;
     case 9:
     mesNasc=5;
     break;
     case 10:
     mesNasc=0;
     break;
     case 11:
     mesNasc=3;
     break;
     case 12:
     mesNasc=5;
     break;
    }

/*
5. Some os números obtidos nas quatro etapas anteriores, obtenha o resto da divisão por 7.
6. Procure na tabela abaixo o número obtido na etapa 5 e você terá o dia da semana em que
nasceu.
    0 domingo 1 segunda 2 terça 3 quarta 4 quinta 5 sexta 6 sábado
    Conseguiu descobrir o dia da semana que você nasceu? Agora faça um algoritmo para esse problema.
Considere como entrada dia, mês e ano de nascimento, e como saída o dia da semana.
*/
    anoSub = anoNasc - 1900;
    anoBiSsexto = anoSub / 4;
    somaNumObtd = anoSub + anoBiSsexto + diaNasc + mesNasc;
    restoDiv=somaNumObtd%7;

    printf("\nSoma dos Numeros Obtidos: %d\n\n", somaNumObtd);
    printf("O Resto da divisao obtida: %d\n\n", restoDiv);

    switch(restoDiv)
    {
     case 0:
     printf("Nasceu em uma: Domingo.\n");
     break;
     case 1:
     printf("Nasceu em uma: Segunda-Feira.\n");
     break;
     case 2:
     printf("Nasceu em uma: Terca-Feira.\n");
     break;
     case 3:
     printf("Nasceu em uma: Quarta-Feira.\n");
     break;
     case 4:
     printf("Nasceu em uma: Quinta-Feira.\n");
     break;
     case 5:
     printf("Nasceu em uma: Sexta-Feira.\n");
     break;
     case 6:
     printf("Nasceu em uma: Sabado.\n");
     break;
    }
return 0;
}
