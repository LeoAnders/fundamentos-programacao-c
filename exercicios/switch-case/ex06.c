// Faça um programa que leia um caractere e verifique se é uma letra maiúscula, minúscula ou um número, utilizando a estrutura switch-case.

#include <stdio.h>

int main()
{
  char caractere;

  printf("Digite um caractere: ");
  scanf(" %c", &caractere);

  switch (1)
  {
  case 1:
    if (caractere >= 'A' && caractere <= 'Z')
    {
      printf("É uma letra maiúscula\n");
    }
    else if (caractere >= 'a' && caractere <= 'z')
    {
      printf("É uma letra minúscula\n");
    }
    else if (caractere >= '0' && caractere <= '9')
    {
      printf("É um número\n");
    }
    else
    {
      printf("Caractere inválido\n");
    }
    break;
  }

  return 0;
}
