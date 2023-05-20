#include <stdio.h>
#include <stdlib.h>

int main()
{

int a, b, c;
printf("Digite tres numeros inteiros:\n ");
scanf("%d\n%d\n%d\n",&a,&b,&c);
    if(a < b && a < c){
    printf("O primeiro valor eh menor");
    }else{
        if(b < c){
        printf("O segundo valor eh menor");
        }
        else{
        printf("O terceiro valor eh menor");
        }
    }
return 0;
}
