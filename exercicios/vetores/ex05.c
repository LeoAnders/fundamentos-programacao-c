// Construa um algoritmo que leia um vetor de 5 palavras e mostre-os na ordem
// inversa.

#include <stdio.h>
#include <ctype.h>

int main()
{
  char vetor[5][20];

  printf("Digite 5 palavras:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Palavra %d: ", i + 1);
    scanf("%s", vetor[i]);
  }

  printf("\nPalavras na ordem inversa:\n");
  for (int i = 4; i >= 0; i--)
  {
    printf("%s\n", vetor[i]);
  }

  return 0;
}
