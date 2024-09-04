// Faça um programa que peça um número e informe se o número é inteiro ou
// quebrado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float num;

  printf("Digite um número: ");
  scanf("%f", &num);

  if (num == (int)num)
  {
    printf("O número %.2f é inteiro.\n", num);
  }
  else
  {
    printf("O número %.2f é quebrado.\n", num);
  }

  return 0;
}