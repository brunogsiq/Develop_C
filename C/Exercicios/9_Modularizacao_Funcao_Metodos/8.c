//Exemplo de programa usando fun��es com e sem retorno.

#include<stdio.h>
#include<conio.h>
/******* �rea dos prot�tipos ******/
void imprime_cabec(void);
int multiplica(int N1, int N2);
/******* fim dos prot�tipos *******/
/* ******* FUN��O PRINCIPAL *******/
int main(void)
{
  int V1=0, V2=0, resultado=0;
  //Chamada da fun��o imprime_cabec
  imprime_cabec();

  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);

  //chama a fun��o e recebe o retorno
  resultado = multiplica(V1,V2);
  printf("Resultado = %d\n", resultado);

  getch();
  return 0;
}
/* ******** FIM DA FUN��O PRINCIPAL *******/
/* --------- Corpo das fun��es --------- */
/*
***** Fun��o imprime_cabec *****
Par�metros de entrada: n�o tem (void)
Objetivo: imprimir cabe�alho na tela
Tipo de retorno: n�o tem (void)
*/
void imprime_cabec(void)
{
  printf("******************************\n");
  printf("* LINGUAGEM C *\n");
  printf("******************************\n\n");

  return;/* retorno de uma fun��o void */
}
/*
***** Fun��o multiplica *****
Par�metros de entrada: N1, N2 ambos int
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
