#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char nome[50];
  int idade;

  printf("Insira sua idade: ");
  scanf("%d", &idade);

  printf("Insira seu nome: ");
  scanf("%s", nome);

  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);

  return 0;
}
