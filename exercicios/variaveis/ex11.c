/* Uma firma contrata um encanador a 250,00 por dia. Crie um programa que
solicite o número de dias trabalhados pelo encanador e imprima a quantia
líquida que deverá ser paga, sabendo-se que são descontados 8% para o
Imposto de Renda */
#include <stdio.h>
#include <stdlib.h>

float valorLiquidoTrabalhado(int diasTrabalhados)
{
  float valorDia = 250.00f;
  float percentualDesconto = 8.0f;

  float valorBruto = valorDia * diasTrabalhados;
  float valorDesconto = valorBruto * (percentualDesconto / 100.0f);
  float valorLiquido = valorBruto - valorDesconto;

  return valorLiquido;
}

int main()
{
  int diasTrabalhados;
  float valorLiquido;

  printf("Dias trabalhados pelo encanador: ");
  scanf("%d", &diasTrabalhados);

  valorLiquido = valorLiquidoTrabalhado(diasTrabalhados);

  printf("A quantia líquida a ser paga é: %.2f", valorLiquido);

  return 0;
}