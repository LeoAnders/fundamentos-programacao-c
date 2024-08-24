/* Construa um programa que pergunte quanto você ganha por hora e o número
de horas trabalhadas no mês. Calcule e mostre o total do seu salário no
referido mês. */

#include <stdio.h>
#include <stdlib.h>

float calculaTotalSalarioMes(float valorHora, float horasTrabalhadas)
{
  return (valorHora * horasTrabalhadas);
}

int main()
{
  float valorHora, horasTrabalhadas, valorTotalMes;

  printf("Valor hora: ");
  scanf("%f", &valorHora);

  printf("Horas Trabalhadas: ");
  scanf("%f", &horasTrabalhadas);

  valorTotalMes = calculaTotalSalarioMes(valorHora, horasTrabalhadas);

  printf("Valor total do salário referido mês: %.2f", valorTotalMes);

  return 0;
}