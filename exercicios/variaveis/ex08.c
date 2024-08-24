/*Construa um programa que peça dois números, calcule e mostre a soma dos
mesmos*/

#include <stdio.h>
#include <stdlib.h>

float somaNumeros(float primeiroNumero, float segundoNumero)
{
  return (primeiroNumero + segundoNumero);
}

int main(void)
{
  float primeiroNumero, segundoNumero, resultadoSoma;

  printf("Insira o primeiro numero: ");
  scanf("%f", &primeiroNumero);

  printf("Insira o segundo numero: ");
  scanf("%f", &segundoNumero);

  resultadoSoma = somaNumeros(primeiroNumero, segundoNumero);

  printf("A soma de %.2f e %.2f é %.2f.\n", primeiroNumero, segundoNumero, resultadoSoma);

  return 0;
}