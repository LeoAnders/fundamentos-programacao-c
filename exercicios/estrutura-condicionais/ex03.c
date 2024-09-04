// Faça um programa que peça um número e imprima se o número é par ou ímpar.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, resto;

  printf("Insira um número:");
  scanf("%d", &num);

  resto = num % 2;

  if (resto == 0)
  {
    printf("Número %d é par \n", num);
  }
  else
  {
    printf("Número %d é ímpar \n", num);
  }

  return 0;
}