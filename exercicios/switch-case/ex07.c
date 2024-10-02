// Faça um programa que leia um número inteiro e informe se ele é divisível por 2, 3, 5 ou 7, utilizando a estrutura switch-case.

#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  switch (0)
  {
  case 0:
    if (numero % 2 == 0)
    {
      printf("%d é divisível por 2\n", numero);
    }
    if (numero % 3 == 0)
    {
      printf("%d é divisível por 3\n", numero);
    }
    if (numero % 5 == 0)
    {
      printf("%d é divisível por 5\n", numero);
    }
    if (numero % 7 == 0)
    {
      printf("%d é divisível por 7\n", numero);
    }
    break;
  }

  return 0;
}
