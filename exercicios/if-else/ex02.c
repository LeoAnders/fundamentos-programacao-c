// Faça um programa que peça um valor e mostre na tela se o valor é positivo ou
// negativo

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;

  printf("Insira um número:");
  scanf("%i", &num);

  if (num > 0)
  {
    printf("Número %i é positivo \n", num);
  }
  else
  {
    printf("Número %i é negativo \n", num);
  }

  return 0;
}