/* Construa um algoritmo que peça 2 números inteiros e um número real.
Calcule e mostre:
  a. o produto do dobro do primeiro com metade do segundo.
  b. a soma do triplo do primeiro com o terceiro.
  c. o terceiro elevado ao cubo */

#include <stdio.h>
#include <stdlib.h>

float cube(float num); // Protótipo da função

int main(void)
{
  int primeiroInteiro, segundoInteiro, dobroPrimeiro, triploPrimeiroTerceiro;
  float numReal, somaTriplo, resultadoCubo, metadeSegundo, produto;

  printf("1º Número inteiro-> ");
  scanf("%i", &primeiroInteiro);

  printf("2º Número inteiro-> ");
  scanf("%i", &segundoInteiro);

  printf("Número real-> ");
  scanf("%f", &numReal);

  // O produto do dobro do primeiro com metade do segundo.
  dobroPrimeiro = primeiroInteiro * 2.0f;
  metadeSegundo = segundoInteiro / 2.0f;
  produto = dobroPrimeiro * metadeSegundo;

  // A soma do triplo do primeiro com o terceiro
  triploPrimeiroTerceiro = primeiroInteiro * 3.0f;
  somaTriplo = triploPrimeiroTerceiro + numReal;

  // Terceiro elevado ao cubo
  resultadoCubo = cube(numReal);

  printf("O produto do dobro do primeiro com metade do segundo: %.2f \n", produto);
  printf("A soma do triplo do primeiro com o terceiro: %.1f \n", somaTriplo);
  printf("Terceiro elevado ao cubo: %.2f \n", resultadoCubo);
  return 0;
}

float cube(float num)
{
  return (num * num * num);
}
