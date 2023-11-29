#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int contF = 0, contM=0;
    printf("DIGITE M OU F ATÉ ATINGIR 10 DADOS.: \n");
    for (int x = 1 ; x <= 10; x++){
    scanf(" %c", &sexo);
        if (sexo =='f'){
        contF = contF + 1;
        }else{
        contM = contM + 1;
        }
    }
    printf("Total Feminino: %d \n", contF);
    printf("Total Masculino: %d \n", contM);

return 0;
}
