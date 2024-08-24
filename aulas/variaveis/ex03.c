#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int anoAtual, idade, anoNascimento;

  anoAtual = 2024;

  printf("Insira sua idade: ");
  scanf("%i", &idade);

  anoNascimento = anoAtual - idade;

  printf("Ano de nascimento: %i\n", anoNascimento);

  return 0;
}
