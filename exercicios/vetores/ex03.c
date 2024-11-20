// Construa um algoritmo que leia um vetor de 3 números reais e mostre-os na
// ordem inversa

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float vetor[3];

  printf("Digite 3 números reais:\n");
  for (int i = 0; i < 3; i++)
  {
    scanf("%f", &vetor[i]);
  }

  printf("A ordem dos números na ordem inversa é:\n");
  for (int i = 2; i >= 0; i--)
  {
    printf("%.2f \n", vetor[i]);
  }

  return 0;
}