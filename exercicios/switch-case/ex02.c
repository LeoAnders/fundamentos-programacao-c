// 11) Faça um programa que leia um número e exiba o dia correspondente da semana. (1-
// Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

#include <stdio.h>

int main()
{
  int numDiaSemana;

  printf("Informe um número correspondente ao dia da semana (1-7): ");
  scanf("%i", &numDiaSemana);

  switch (numDiaSemana)
  {
  case 1:
    printf("Domingo\n");
    break;
  case 2:
    printf("Segunda-feira\n");
    break;
  case 3:
    printf("Terça-feira\n");
    break;
  case 4:
    printf("Quarta-feira\n");
    break;
  case 5:
    printf("Quinta-feira\n");
    break;
  case 6:
    printf("Sexta-feira\n");
    break;
  case 7:
    printf("Sábado\n");
    break;
  default:
    printf("Valor inválido\n");
    break;
  }

  return 0;
}