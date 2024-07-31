#include <stdio.h>
#include <stdlib.h>

void cadastrarNum( int v[], int n);
void exibirNum ( int v[], int n);

int main()
{
    int n;
    printf("DIGITE QUANTOS NUMEROS QUER CADASTRAR: ");
    scanf("%d", &n);

    int numero[n];
    printf( "CADASTRE OS NUMEROS: " );
    cadastrarNum ( numero, n );
    exibirNum ( numero, n );
    return 0;
}

void cadastrarNum (int v[], int n){
  for (int i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }
}

void exibirNum ( int v[], int n){
    for (int i = 0; i < n; i++){
    printf("%3d -->> ", v[i]);
    }
}
