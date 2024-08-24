/* Construa um algoritmo que peça uma temperatura em graus Celsius (ºC),
transforme e mostre na tela a temperatura em graus Fahrenheit (ºF) */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float celsius, fahrenheit;

  printf("Insira graus Celsius (ºC): ");
  scanf("%f", &celsius);

  fahrenheit = celsius * 1.8 + 32;

  printf("Temperatura em graus Fahrenheit (ºF): %.2f", fahrenheit);

  return 0;
}