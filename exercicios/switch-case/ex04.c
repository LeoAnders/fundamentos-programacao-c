// Faça um programa que leia um número inteiro de 1 a 12 e mostre a quantidade de dias do mês correspondente, utilizando a estrutura switch-case.

#include <stdio.h>

int main()
{
  int mes;

  printf("Digite um número de 1 a 12: ");
  scanf("%d", &mes);

  switch (mes)
  {
  case 1:  // Janeiro
  case 3:  // Março
  case 5:  // Maio
  case 7:  // Julho
  case 8:  // Agosto
  case 10: // Outubro
  case 12: // Dezembro
    printf("31 dias\n");
    break;
  case 4:  // Abril
  case 6:  // Junho
  case 9:  // Setembro
  case 11: // Novembro
    printf("30 dias\n");
    break;
  case 2: // Fevereiro
    printf("28 ou 29 dias\n");
    break;
  default:
    printf("Mês inválido\n");
  }

  return 0;
}
