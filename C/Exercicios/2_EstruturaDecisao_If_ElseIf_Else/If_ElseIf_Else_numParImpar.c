#include <stdio.h>
#include <stdlib.h>

int main()
{

/*LER E DIZER SE UM N�MERO � PAR OU IMPAR*/
    int num;
    printf("DIGITE UM NUMERO: ");
    scanf("%d", &num);
    if (num % 2 == 0){
    printf("Eh Par.");
    }else{
    printf("Eh Impar.");
    }

}
