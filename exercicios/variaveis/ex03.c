/* Construa um algoritmo que peça a temperatura em graus Fahrenheit (ºF),
transforme e mostre na tela a temperatura em graus Celsius (ºC). C=5*(F-32)/9} */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float celsius, fahrenheit;

  printf("Insira graus Fahrenheit (ºF): ");
  scanf("%f", &fahrenheit);

  celsius = 5 * (fahrenheit - 32) / 9;

  printf("Temperatura em graus Celsius (ºC): %.2f", celsius);

  return 0;
}
