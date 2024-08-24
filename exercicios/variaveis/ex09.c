// Construa um programa que peça as 4 notas bimestrais e mostre a média

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float somaNotasBimestrais(float arrayNotas[4])
{
  float mediaNotas;
  float somaNotas = 0;

  for (int i = 0; i < 4; i++)
  {
    somaNotas += arrayNotas[i];
  }

  mediaNotas = somaNotas / 4;

  return mediaNotas;
}

int main(void)
{

  float arrayNotas[4], mediaNotas;
  char situacao[20];

  printf("------------ Insira as 4 notas bimestrais ------------ \n");
  for (int i = 0; i < 4; i++)
  {
    printf("%iº Nota: ", i + 1);
    scanf("%f", &arrayNotas[i]);
  }

  mediaNotas = somaNotasBimestrais(arrayNotas);

  if (mediaNotas >= 6)
  {
    strcpy(situacao, "Aprovado");
  }
  else
  {
    strcpy(situacao, "Reprovado");
  }

  printf("\n");
  printf("Media: %.2f \n", mediaNotas);
  printf("Situação: %s \n", situacao);

  return 0;
}