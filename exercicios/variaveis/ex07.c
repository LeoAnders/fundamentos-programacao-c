// Construa um programa que converta metros para centímetros

#include <stdio.h>
#include <stdlib.h>

float converteMetrosParaCentimetros(float metros)
{
  return (metros * 100);
}

int main(void)
{
  float centimetros, metros;

  printf("Digite o valor em metros(m) para conversão em centímetros(cm): ");
  scanf("%f", &metros);

  centimetros = converteMetrosParaCentimetros(metros);

  printf("Conversão de %.2f metros(m) para centímetros(cm) é: %.2f (cm)\n", metros, centimetros);

  return 0;
}