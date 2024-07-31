//Exemplo de programa usando funções com e sem retorno.

#include<stdio.h>
#include<conio.h>
/******* Área dos protótipos ******/
void imprime_cabec(void);
int multiplica(int N1, int N2);
/******* fim dos protótipos *******/
/* ******* FUNÇÃO PRINCIPAL *******/
int main(void)
{
  int V1=0, V2=0, resultado=0;
  //Chamada da função imprime_cabec
  imprime_cabec();

  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);

  //chama a função e recebe o retorno
  resultado = multiplica(V1,V2);
  printf("Resultado = %d\n", resultado);

  getch();
  return 0;
}
/* ******** FIM DA FUNÇÃO PRINCIPAL *******/
/* --------- Corpo das funções --------- */
/*
***** Função imprime_cabec *****
Parâmetros de entrada: não tem (void)
Objetivo: imprimir cabeçalho na tela
Tipo de retorno: não tem (void)
*/
void imprime_cabec(void)
{
  printf("******************************\n");
  printf("* LINGUAGEM C *\n");
  printf("******************************\n\n");

  return;/* retorno de uma função void */
}
/*
***** Função multiplica *****
Parâmetros de entrada: N1, N2 ambos int
Objetivo: multiplicar valores
Tipo de retorno: int (resultado);
*/
//multiplica recebe N1,N2 e retorna um int
int multiplica(int N1, int N2)
{
  int resultado;
  resultado = N1 * N2;

  //retornando o valor para main
  return(resultado);
