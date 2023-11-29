#include <stdio.h>
#include <stdlib.h>

int main(){
    int dep, idade, cont;
    float adicional;
    int contF = 0;

    while(contF < 30){
        printf("Funcionario %d:\n", contF+1);
        printf("Digite o numero de dependentes: ");
        scanf("%d",&dep);
        cont = 0;
        adicional = 0;
        while(cont < dep){
            printf("digite a idade do dep %d: ",cont+1);
            scanf("%d",&idade);
            if(idade < 18){
                adicional = adicional + 60;
            }
            cont++;
        }
        printf("Adicional para o funcionario %d: %.2f\n",contF+1, adicional);
        contF++;
    }

    return 0;
}
