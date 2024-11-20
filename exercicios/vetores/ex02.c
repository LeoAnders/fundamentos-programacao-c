// Construa um algoritmo que leia um vetor de 5 números reais e mostre a soma,
// a multiplicação e os números.

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float vetor[5];
  float soma = 0;
  float multi = 1;

  printf("Digite 5 numeros reais:\n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%f", &vetor[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    soma += vetor[i];
    multi *= vetor[i];
  }

  printf("A soma dos números é: %.2f \n", soma);
  printf("A multiplicação dos números é: %.2f \n", multi);

  return 0;
}