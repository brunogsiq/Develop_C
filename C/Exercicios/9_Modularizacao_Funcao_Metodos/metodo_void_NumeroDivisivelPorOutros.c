#include <stdio.h>
#include <stdlib.h>

void divisivel (int n1, int n2){
    if (n1 % n2 == 0){
        printf("\n%d eh divisivel por %d\n\n", n1, n2);
    }else{
        printf("\n%d Nao eh divisivel por %d\n\n", n1, n2);
    }
}

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    divisivel(n,2);
    divisivel(n,3);
    divisivel(n,5);
    divisivel(n,7);

}
