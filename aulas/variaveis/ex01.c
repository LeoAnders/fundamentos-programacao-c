#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int idade = 20;
  char nome[] = "Leonardo";
  float altura = 1.79;

  char letraInicialNome = nome[0];

  printf("Me chamo %s e tenho %i anos \n", nome, idade);
  printf("A minha altura é de %.2f \n", altura);
  printf("A letra inicial do meu nome é %c \n", letraInicialNome);

  return 0;
}