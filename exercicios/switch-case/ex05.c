// Faça um programa que leia um número inteiro entre 1 e 12 e mostre o quadrado ou o cubo do número, dependendo se ele é par ou ímpar, utilizando a estrutura switch-case.

#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um número de 1 a 12: ");
  scanf("%d", &numero);

  switch (numero % 2)
  {
  case 0: // Par
    printf("Quadrado de %d: %d\n", numero, numero * numero);
    break;
  case 1: // Ímpar
    printf("Cubo de %d: %d\n", numero, numero * numero * numero);
    break;
  default:
    printf("Número inválido\n");
  }

  return 0;
}
