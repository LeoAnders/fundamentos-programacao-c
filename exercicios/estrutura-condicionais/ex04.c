// Faça um programa que peça um número e se este número for par, transforme-o
// em ímpar e vice-versa.

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
    num -= 1;
    printf("'par' para 'ímpar' %d \n", num);
  }
  else
  {
    num += 1;
    printf("'ímpar' para 'par' %d \n", num);
  }

  return 0;
}