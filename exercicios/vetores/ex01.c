// Construa um algoritmo que leia um vetor de 10 números inteiros e mostre a
// soma dos números (Use forma contraída para a soma).
#include <stdio.h>

int main()
{
  int vetor[10];
  int soma = 0;

  printf("Digite 10 numeros inteiros:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    soma += vetor[i];
  }

  printf("A soma dos numeros e: %d\n", soma);

  return 0;
}
