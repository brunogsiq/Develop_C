#include <stdio.h>
#include <stdlib.h>

//Lista Para 30 Funcionarios;

int main(){
    int dependente, idade, cont;
    float adicional;
    int contFuncionarios = 0;

    while(contFuncionarios < 30){
        printf("Funcionario %d:\n", contFuncionarios+1);
        printf("Digite o numero de dependentes: ");
        scanf("%d",&dependente);
        cont = 0;
        adicional = 0;
        while(cont < dependente)
        {
            printf("digite a idade do dep %d: ",cont+1);
            scanf("%d",&idade);
            if(idade < 18)
            {
                adicional = adicional + 60;
            }
            cont++;
        }

        printf("Adicional para o funcionario %d: %.2f\n",contFuncionarios+1, adicional);
        contFuncionarios++;
    }


    return 0;
}
