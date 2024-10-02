// Faça um programa que peça dois números e imprima o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2;

  printf("Insira o primeiro número:");
  scanf("%i", &num1);

  printf("Insira o segundo número:");
  scanf("%i", &num2);

  if (num1 > num2)
  {
    printf("Número %i é maior que número %i \n", num1, num2);
  }
  else if (num1 < num2)
  {
    printf("Número %i é menor que número %i \n", num1, num2);
  }
  else
  {
    printf("Ambos os números inseridos são iguais\n");
  }

  return 0;
}