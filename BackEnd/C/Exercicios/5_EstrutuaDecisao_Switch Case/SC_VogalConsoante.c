#include <stdio.h>
#include <stdlib.h>

/*2) Faça um algoritmo que leia uma letra do alfabeto
 e informe se é uma vogal ou consoante.
 Se o usuário digitar um caractere que não seja uma letra do alfabeto,
 exiba a mensagem “caractere inválido”.*/

int main()
{
    char letra;
    printf("Digite a letra que deseja identificar: ");
    scanf("%c", &letra);

    switch(letra)
    {
      case 'a':
      printf("Eh uma Vogal.");
      break;
      case 'e':
      printf("Eh uma Vogal.");
      break;
      case 'i':
      printf("Eh uma Vogal.");
      break;
      case 'o':
      printf("Eh uma Vogal.");
      break;
      case 'u':
      printf("Eh uma Vogal.");
      break;
      case 'y':
      printf("Eh uma Vogal.");
      break;

      case 'b':
      printf("Eh uma Consoante.");
      break;
      case 'c':
      printf("Eh uma Consoante.");
      break;
      case 'd':
      printf("Eh uma Consoante.");
      break;
      case 'f':
      printf("Eh uma Consoante.");
      break;
      case 'g':
      printf("Eh uma Consoante.");
      break;
      case 'h':
      printf("Eh uma Consoante.");
      break;
      case 'j':
      printf("Eh uma Consoante.");
      break;
      case 'k':
      printf("Eh uma Consoante.");
      break;
      case 'l':
      printf("Eh uma Consoante.");
      break;
      case 'm':
      printf("Eh uma Consoante.");
      break;
      case 'n':
      printf("Eh uma Consoante.");
      break;
      case 'p':
      printf("Eh uma Consoante.");
      break;
      case 'q':
      printf("Eh uma Consoante.");
      break;
      case 'r':
      printf("Eh uma Consoante.");
      break;
      case 's':
      printf("Eh uma Consoante.");
      break;
      case 't':
      printf("Eh uma Consoante.");
      break;
      case 'v':
      printf("Eh uma Consoante.");
      break;
      case 'x':
      printf("Eh uma Consoante.");
      break;
      case 'w':
      printf("Eh uma Consoante.");
      break;
      case 'z':
      printf("Eh uma Consoante.");
      break;
      default:
      printf("Caractere invalido.");
    }

    return 0;
}
