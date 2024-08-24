// Construa um programa que calcule a área de um círculo
// https://learn.microsoft.com/pt-br/cpp/c-runtime-library/math-constants?view=msvc-170

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //necessária para usar as funções matemáticas

double calcularAreaCirculo(double raio)
{
  return (M_PI * raio * raio);
}

int main(void)
{
  double raio, area;

  printf("Insira o valor do raio (r): ");
  scanf("%lf", &raio);

  area = calcularAreaCirculo(raio);

  printf("O valor da area é: %.4lf \n", area);

  return 0;
}