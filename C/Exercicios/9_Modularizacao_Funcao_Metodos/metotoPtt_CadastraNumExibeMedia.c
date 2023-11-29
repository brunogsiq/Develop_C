#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo para cadastrar N números em um vetor e retornar o valor médio dos elementos do vetor.
Crie dois módulos com parâmetros:
    um para cadastrar os números em um vetor;
    outro para calcular e retornar a média dos elementos de um vetor
*/

void cadastrar ( float v[], int n);
float calcularMedia(float v[], int n);

int main()
{
    int n;
    printf("DIGITE QUANTOS NUMEROS DESEJA CADASTRAR: ");
    scanf("%d", &n);

    float numeros[n], mediaVal;
    printf("CADASTRE OS NUMEROS: ");
    cadastrar (numeros, n);

    mediaVal = calcularMedia ( numeros, n) ;
    printf("\n\n\A MEDIA EH: %.2f\n\n", mediaVal );

    return 0;
}

void cadastrar (float v[], int n){
    for (int i = 0; i < n; i++){
    scanf("%f", v[i]);
    }
}

float calcularMedia(float v[], int n){
  float soma = 0, media;
  for (int i = 0; i < n; i++){
    soma = soma + v[i];
  }
  media = soma / n;

  return media;
}
